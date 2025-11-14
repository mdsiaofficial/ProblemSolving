#include <stdio.h>

// Function to count the number of pairs with sum in the range [A, B]
int countPairsWithinRange(int N, int A, int B, int sequence[]) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int pairSum = sequence[i] + sequence[j];
            if (A <= pairSum && pairSum <= B) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, A, B;
        scanf("%d", &N);
        scanf("%d %d", &A, &B);
        int sequence[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &sequence[i]);
        }

        int result = countPairsWithinRange(N, A, B, sequence);
        printf("Case %d: %d\n", caseNum, result);
    }

    return 0;
}
