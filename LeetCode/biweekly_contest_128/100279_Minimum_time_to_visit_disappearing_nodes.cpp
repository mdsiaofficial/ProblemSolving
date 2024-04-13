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


// time limit exceeded

class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        // Step 1: Create Graph Representation
        vector<vector<pair<int, int>>> adjacencyList(n);
        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1], time = edge[2];
            adjacencyList[u].push_back({v, time});
            adjacencyList[v].push_back({u, time});
        }

        // Step 2: Initialize Min Heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // Step 3: Dijkstra's Algorithm with Priority Queue and Adjacency List
        vector<int> minTime(n, numeric_limits<int>::max());
        minTime[0] = 0;
        minHeap.push({0, 0}); // (time, node)

        while (!minHeap.empty()) {
            int currentTime = minHeap.top().first;
            int currentNode = minHeap.top().second;
            minHeap.pop();

            // If the current node has already disappeared, skip it
            if (disappear[currentNode] <= currentTime) {
                continue;
            }

            // Traverse neighbors and update minimum times
            for (const auto& neighbor : adjacencyList[currentNode]) {
                int neighborNode = neighbor.first;
                int edgeTime = neighbor.second;
                int updatedTime = currentTime + edgeTime;

                // If the neighbor node is not reachable or has disappeared, skip it
                if (updatedTime < minTime[neighborNode] && disappear[neighborNode] > updatedTime) {
                    minTime[neighborNode] = updatedTime;
                    minHeap.push({updatedTime, neighborNode});
                }
            }
        }

        // Step 4: Construct the Output Array
        vector<int> answer;
        for (int i = 0; i < n; ++i) {
            if (minTime[i] == numeric_limits<int>::max() || disappear[i] <= minTime[i]) {
                answer.push_back(-1);
            } else {
                answer.push_back(minTime[i]);
            }
        }

        // Step 5: Return the Output Array
        return answer;
    }
};

int main() {
    // Example usage
    int n = 3;
    vector<vector<int>> edges = {{0, 1, 2}, {1, 2, 1}, {0, 2, 4}};
    vector<int> disappear = {1, 3, 5};

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