#include <iostream>
#include <vector>
#include <algorithm>

int countValidPairs(int N, int A, int B, std::vector<int>& P) {
    std::sort(P.begin(), P.end());
    int count = 0;
    int left = 0;
    int right = N - 1;

    while (left < right) {
        int S = P[left] + P[right];
        if (A <= S && S <= B) {
            count++;
            left++;
        } else if (S < A) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}

int main() {
    int T;
    std::cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, A, B;
        std::cin >> N >> A >> B;
        std::vector<int> P(N);

        for (int i = 0; i < N; i++) {
            std::cin >> P[i];
        }

        int result = countValidPairs(N, A, B, P);
        std::cout << "Case " << caseNum << ": " << result << std::endl;
    }

    return 0;
}
