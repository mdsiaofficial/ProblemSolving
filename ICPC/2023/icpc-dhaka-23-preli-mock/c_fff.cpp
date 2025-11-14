cpp
#include<bits/stdc++.h>
using namespace std;

int addPair(int N, int A, int B, vector<int> sequence) {
    sort(sequence.begin(), sequence.end());
    int count = 0;
    int left = 0, right = N - 1;
    while (left < right) {
        int pairSum = sequence[left] + sequence[right];
        if (pairSum < A) {
            left++;
        } else if (pairSum > B) {
            right--;
        } else {
            count++;
            left++;
            right--;
        }
    }
    return count;
}

int main() {
    ios :: sync_with_stdio(false), cin.tie(0);
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N, A, B;
        cin >> N >> A >> B;
        vector<int> sequence(N);

        for (int i = 0; i < N; i++) {
            cin >> sequence[i];
        }

        int result = addPair(N, A, B, sequence);
        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}