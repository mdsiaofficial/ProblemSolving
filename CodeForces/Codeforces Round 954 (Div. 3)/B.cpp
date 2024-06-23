#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;

int n, m;
vector<vector<long long>> a(MAX_N, vector<long long>(MAX_M));

bool hasLocalMaxima() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool isLocalMax = true;
            if (i > 0 && a[i][j] <= a[i-1][j]) isLocalMax = false;
            if (i < n-1 && a[i][j] <= a[i+1][j]) isLocalMax = false;
            if (j > 0 && a[i][j] <= a[i][j-1]) isLocalMax = false;
            if (j < m-1 && a[i][j] <= a[i][j+1]) isLocalMax = false;
            if (isLocalMax) return true;
        }
    }
    return false;
}

void stabilize() {
    while (hasLocalMaxima()) {
        int mini = n, minj = m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                bool isLocalMax = true;
                if (i > 0 && a[i][j] <= a[i-1][j]) isLocalMax = false;
                if (i < n-1 && a[i][j] <= a[i+1][j]) isLocalMax = false;
                if (j > 0 && a[i][j] <= a[i][j-1]) isLocalMax = false;
                if (j < m-1 && a[i][j] <= a[i][j+1]) isLocalMax = false;
                if (isLocalMax && (i < mini || (i == mini && j < minj))) {
                    mini = i;
                    minj = j;
                }
            }
        }
        a[mini][minj]--;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        stabilize();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}