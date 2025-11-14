#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int addPair(int N, int A, int B, vector<int> sequence) {
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
    //ios :: sync_with_stdio(false), cin.tie(0);
    ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
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
