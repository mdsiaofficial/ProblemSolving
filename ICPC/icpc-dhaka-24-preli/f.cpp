#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    std::cin >> t;
    std::vector<std::vector<long long>> list_T(t, std::vector<long long>(3));
    for (int i = 0; i < t; ++i) {
        std::cin >> list_T[i][0] >> list_T[i][1] >> list_T[i][2];
    }

    for (int i = 0; i < t; ++i) {
        long long x = list_T[i][0];
        long long y = list_T[i][1];
        long long z = list_T[i][2];
        long long s = (x + y + z) / 2;
        long long area_sq = s * (s - x) * (s - y) * (s - z);
        long long num = area_sq;
        long long den = s * s;
        long long common = gcd(num, den);
        std::cout << num / common << "/" << den / common << std::endl;
    }
    return 0;
}
