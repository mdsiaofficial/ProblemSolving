#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int countOnes(int n) {
    int count = 0;
    while (n) {
        count++;
        n &= n - 1;
    }
    return count;
}

int generateCombinations(int l1, int r1, int l2, int r2, int l3, int r3) {
    int count = 0;
    for (int i = l1; i <= r1; i++) {
        for (int j = l2; j <= r2; j++) {
            for (int k = l3; k <= r3; k++) {
                int xorVal = i ^ j ^ k;
                if (countOnes(xorVal) == 2 || countOnes(xorVal) == 3 ||
                    countOnes(xorVal) == 5 || countOnes(xorVal) == 7 ||
                    countOnes(xorVal) == 11 || countOnes(xorVal) == 13 ||
                    countOnes(xorVal) == 17 || countOnes(xorVal) == 19 ||
                    countOnes(xorVal) == 23 || countOnes(xorVal) == 29 ||
                    countOnes(xorVal) == 31) {
                    count = (count + 1) % MOD;
                }
            }
        }
    }
    return count;
}

std::vector<int> countPrimeXOR(int t, const std::vector<std::vector<std::pair<int, int>>>& testCases) {
    std::vector<int> results;
    for (int i = 0; i < t; i++) {
        int l1 = testCases[i][0].first;
        int r1 = testCases[i][0].second;
        int l2 = testCases[i][1].first;
        int r2 = testCases[i][1].second;
        int l3 = testCases[i][2].first;
        int r3 = testCases[i][2].second;
        int result = generateCombinations(l1, r1, l2, r2, l3, r3);
        results.push_back(result);
    }
    return results;
}

int main() {
    int t;
    std::cin >> t;

    std::vector<std::vector<std::pair<int, int>>> testCases(t);
    for (int i = 0; i < t; i++) {
        testCases[i].resize(3);
        for (int j = 0; j < 3; j++) {
            std::cin >> testCases[i][j].first >> testCases[i][j].second;
        }
    }

    std::vector<int> results = countPrimeXOR(t, testCases);

    for (int i = 0; i < t; i++) {
        std::cout << results[i] << std::endl;
    }

    return 0;
}
