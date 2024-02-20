#include <iostream>
#include <vector>
#include <algorithm>

int founder(int n, std::vector<int>& arrB, std::vector<int>& store) {
    int s = -1;
    int e = -1;
    for (int i = 0; i < n; i++) {
        if (s == -1 && std::find(store.begin(), store.end(), arrB[i]) == store.end()) {
            s = i;
        }
        if (e == -1 && std::find(store.begin(), store.end(), arrB[n - 1 - i]) == store.end()) {
            e = n - 1 - i;
        }
    }
    int count = 0;
    for (int i = s; i <= e; i++) {
        count++;
    }
    return count;
}

int decoder(int n, std::vector<int>& arrA, std::vector<int>& arrB) {
    if (arrA == arrB) {
        return 0;
    }
    std::vector<int> store;
    bool found = false;
    for (int i : arrB) {
        if (std::find(arrA.begin(), arrA.end(), i) != arrA.end()) {
            store.push_back(i);
            found = true;
        }
    }
    if (found) {
        return founder(n, arrB, store);
    } else {
        return n;
    }
}

int main() {
    int t, n;
    std::cin >> t;
    for (int i = 1; i <= t; i++) {
        std::cin >> n;
        std::vector<int> arrA(n), arrB(n);
        for (int j = 0; j < n; j++) {
            std::cin >> arrA[j];
        }
        for (int j = 0; j < n; j++) {
            std::cin >> arrB[j];
        }
        std::cout << "Case " << i << ": " << decoder(n, arrA, arrB) << std::endl;
    }
    return 0;
}
