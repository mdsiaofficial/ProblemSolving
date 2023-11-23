#include <iostream>
#include <vector>
#include <stack>
using namespace std;

 // unsolved

// A function to calculate the length of the longest balanced parenthesis substring
int longestBalanced(string s) {
    int n = s.length();
    int ans = 0;
    stack<int> st;
    st.push(-1); // to mark the base index
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(i); // push the index of the opening bracket
        }
        else {
            st.pop(); // pop the index of the matching opening bracket
            if (st.empty()) {
                st.push(i); // push the index of the unmatched closing bracket
            }
            else {
                ans = max(ans, i - st.top()); // update the answer with the length of the current balanced substring
            }
        }
    }
    return ans;
}

// A function to calculate the value of Z for a given tree
int calculateZ(vector<int> adj[], vector<char> A, int n) {
    int Z = 0;
    vector<vector<string>> path(n, vector<string>(n)); // to store the string on the simple path between any two nodes
    for (int i = 0; i < n; i++) {
        path[i][i] = A[i]; // the string on the path from a node to itself is just the value of that node
    }
    for (int i = 0; i < n; i++) {
        for (int j : adj[i]) {
            path[i][j] = path[j][i] = A[i] + A[j]; // the string on the path from a node to its adjacent node is the concatenation of their values
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (path[i][k] != "" && path[k][j] != "") {
                    path[i][j] = path[i][k] + path[k][j]; // the string on the path from i to j through k is the concatenation of the strings on the paths from i to k and from k to j
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            Z += longestBalanced(path[i][j]); // add the length of the longest balanced parenthesis substring on the path from i to j to Z
        }
    }
    return Z;
}

// A function to construct a tree using N nodes such that the value of Z is maximized[^1^][1]
void constructTree(vector<char> A, int n) {
    vector<int> adj[n]; // to store the adjacency list of the tree
    vector<int> open; // to store the indices of the nodes with opening brackets
    vector<int> close; // to store the indices of the nodes with closing brackets
    for (int i = 0; i < n; i++) {
        if (A[i] == '(') {
            open.push_back(i); // push the index of the node with opening bracket
        }
        else {
            close.push_back(i); // push the index of the node with closing bracket
        }
    }
    int m = min(open.size(), close.size()); // the number of edges that can be formed by matching opening and closing brackets
    for (int i = 0; i < m; i++) {
        int u = open[i]; // the index of the node with opening bracket
        int v = close[i]; // the index of the node with closing bracket
        adj[u].push_back(v); // add an edge between u and v
        adj[v].push_back(u); // add an edge between v and u
    }
    // print the edges of the tree
    for (int i = 0; i < n; i++) {
        for (int j : adj[i]) {
            if (i < j) { // to avoid printing the same edge twice
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    // print the value of Z for the constructed tree
    cout << "Z = " << calculateZ(adj, A, n) << endl;
}

int main() {
    int n; // the number of nodes in the tree[^2^][2]
    cin >> n;
    vector<char> A(n); // the vector to store the value of each node
    for (int i = 0; i < n; i++) {
        cin >> A[i];[^3^][3]
    }
    constructTree(A, n); // construct the tree and print the output
    return 0;
}
