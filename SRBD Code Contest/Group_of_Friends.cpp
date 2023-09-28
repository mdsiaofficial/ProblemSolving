#include <iostream>
#include <vector>

using namespace std;

// Union-Find data structure
class UnionFind {
public:
    vector<int> parent;

    UnionFind(int n) {
        parent.resize(n);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        int root_x = find(x);
        int root_y = find(y);
        if (root_x != root_y)
            parent[root_x] = root_y;
    }
};

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    UnionFind uf(N);

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (gcd(A[i], A[j]) > 1)
                uf.unite(i, j);
        }
    }

    int groups = 0;
    for (int i = 0; i < N; ++i) {
        if (uf.find(i) == i)
            groups++;
    }

    cout << groups << endl;

    return 0;
}
