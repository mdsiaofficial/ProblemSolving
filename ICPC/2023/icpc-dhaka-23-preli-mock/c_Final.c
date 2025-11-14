#include <stdio.h>

int addpair(int N, int A, int B, int sequence[]) {
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

    for (int i = 1; i <= T; i++) {
        int N, A, B;
        scanf("%d", &N);
        scanf("%d %d", &A, &B);
        int sequence[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &sequence[i]);
        }

        int result = addpair(N, A, B, sequence);
        printf("Case %d: %d\n", i, result);
    }

    return 0;
}
