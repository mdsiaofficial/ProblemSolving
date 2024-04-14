#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


// solved

class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        // Step 1: Construct adjacency list
        unordered_map<int, vector<pair<int,int>>> adj;
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        // Step 2: Initialize priority queue
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        // Step 3: Initialize answer array and visited array
        vector<int> ans(n, -1);
        vector<bool> visited(n, false);

        // Step 4: Start from node 0
        pq.push({0, 0});
        ans[0] = 0;

        // Step 5: Dijkstra's algorithm
        while (!pq.empty()) {
            auto topPair = pq.top();
            pq.pop();

            int currWt = topPair.first;
            int currNode = topPair.second;

            // Skip if already visited with a lower weight
            if (visited[currNode]) continue;
            visited[currNode] = true;

            // Explore neighbors
            for (auto& nbr : adj[currNode]) {
                int newWt = currWt + nbr.second;
                // Update minimum time to reach node if it's not disappeared
                if (newWt < disappear[nbr.first] && (ans[nbr.first] == -1 || newWt < ans[nbr.first])) {
                    pq.push({newWt, nbr.first});
                    ans[nbr.first] = newWt;
                }
            }
        }

        return ans;
    }
};

int main() {
    // Example usage
    int n = 3;
    vector<vector<int>> edges = {{0, 1, 2}, {1, 2, 1}, {0, 2, 4}};
    vector<int> disappear = {1, 1, 5};

    Solution solution;
    vector<int> answer = solution.minimumTime(n, edges, disappear);

    // Output the result
    cout << "Output: [";
    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i];
        if (i < answer.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}