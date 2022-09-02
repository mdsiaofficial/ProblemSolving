#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        std::vector<int> mx(n), mn(n);
        for (int i = 0; i < n; i++) {
            int j = std::lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            mn[i] = b[j] - a[i];
        }

        std::vector<int> pre(n);
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + (a[i] <= b[i - 1]);
        }

        for (int i = 0; i < n; i++) {
            int l = i, r = n - 1;
            while (l < r) {
                int m = (l + r + 1) >> 1;
                pre[m] - pre[i] == m - i ? l = m : r = m - 1;
            }
            mx[i] = b[l] - a[i];
        }

        for (int i = 0; i < n; i++) {
            std::cout << mn[i] << " \n"[i == n - 1];
        }
        for (int i = 0; i < n; i++) {
            std::cout << mx[i] << " \n"[i == n - 1];
        }
    }

    return 0;
}