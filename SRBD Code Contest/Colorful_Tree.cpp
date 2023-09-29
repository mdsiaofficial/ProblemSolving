#include <iostream>
#include <vector>
#include <unordered_set>
// unsolved
using namespace std;

const int MAXN = 500005;

vector<int> adj[MAXN];
vector<int> color(MAXN);
vector<int> parent(MAXN);

void dfs(int node, unordered_set<int>& unique_colors) {
    unique_colors.insert(color[node]);
    
    for (int child : adj[node]) {
        if (child != parent[node]) {
            parent[child] = node;
            dfs(child, unique_colors);
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }
        
        parent[1] = 0;
        
        for (int i = 2; i <= n; ++i) {
            int p;
            cin >> p;
            adj[p].push_back(i);
        }
        
        string s;
        cin >> s;
        
        for (int i = 1; i <= n; ++i) {
            color[i] = s[i - 1] - '0';
        }
        
        while (q--) {
            int x, y;
            cin >> x >> y;
            
            unordered_set<int> unique_colors_x, unique_colors_y;
            
            dfs(x, unique_colors_x);
            dfs(y, unique_colors_y);
            
            unordered_set<int> common_colors;
            
            for (int color_x : unique_colors_x) {
                if (unique_colors_y.count(color_x)) {
                    common_colors.insert(color_x);
                }
            }
            
            cout << common_colors.size() << endl;
        }
    }
    
    return 0;
}
