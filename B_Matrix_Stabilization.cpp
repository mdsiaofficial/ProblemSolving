#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

struct Cell {
    int value;
    int row;
    int col;
    bool operator<(const Cell& other) const {
        if (value != other.value) return value < other.value;
        if (row != other.row) return row > other.row;
        return col > other.col;
    }
};

void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
    priority_queue<Cell> pq;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<pair<int, int>> directions{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            pq.push({matrix[i][j], i, j});
    
    while (!pq.empty()) {
        auto [value, i, j] = pq.top(); pq.pop();
        if (visited[i][j]) continue;
        visited[i][j] = true;
        
        bool isPeak = true;
        for (auto& dir : directions) {
            int ni = i + dir.first, nj = j + dir.second;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && matrix[ni][nj] >= matrix[i][j]) {
                isPeak = false;
                break;
            }
        }
        
        if (isPeak) {
            matrix[i][j]--;
            pq.push({matrix[i][j], i, j});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> matrix[i][j];

        stabilizeMatrix(matrix, n, m);

        for (const auto& row : matrix) {
            for (const auto& elem : row)
                cout << elem << " ";
            cout << "\n";
        }
    }

    return 0;
}