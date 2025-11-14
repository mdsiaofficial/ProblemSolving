#include <iostream>
using namespace std;

pair<long long, long long> findCallerCallee(long long N, long long P, long long K) {
    if (K == 0) {
        return {N, -1};
    }
    
    if (N < P) {
        if (K == 1) {
            return {N, -1};
        } else {
            return {N, -1};
        }
    }
    
    long long ans = 0;
    long long i = 1;
    
    while (i <= P) {
        long long currentCalls = N - i;
        long long totalCalls = 1;
        
        if (currentCalls > 0) {
            pair<long long, long long> subResult = findCallerCallee(currentCalls, P, K - totalCalls);
            if (subResult.second != -1) {
                return {N, subResult.first};
            }
        }
        
        ans += 1;
        i += 1;
    }
    
    return {N, ans};
}

int main() {
    int T;
    cin >> T;
    
    for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
        long long N, P, K;
        cin >> N >> P >> K;
        
        pair<long long, long long> result = findCallerCallee(N, P, K);
        
        cout << "Case " << caseNumber << ": ";
        if (result.second == -1) {
            cout << "Invalid" << endl;
        } else {
            cout << result.first << " " << result.second << endl;
        }
    }
    
    return 0;
}
