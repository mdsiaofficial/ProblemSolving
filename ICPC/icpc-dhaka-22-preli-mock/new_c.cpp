#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip> //for setprecision()
#include <cstring> //for memset()
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define w(x) int x; cin>>x; while(x--)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, n, q;
    cin >> t;
    while (t--) {
        cin>>n;
        int playersPen[n + 1];
        int scores[n + 1];
        int penHoldersIndex[n + 1];
        for (int j = 1; j <= n; j++) {
            playersPen[j] = 1;
            cin >> scores[j];
            penHoldersIndex[j] = j;
        }
        cin >> q;
        for (int k = 0; k <= q; k++) {
            int qType;
            cin>>qType;
            int player1Index, player2Index;
            if (qType == 1) {
                cin>>player1Index>>player2Index;
                if ((scores[player1Index] == scores[player2Index]) ||
                    (playersPen[player1Index] == 0) ||
                    (playersPen[player2Index] == 0)) {
                    //Nothing Happen...
                }
                else if (scores[player1Index] > scores[player2Index]) {
                    playersPen[player1Index] += playersPen[player2Index];
                    playersPen[player2Index] = 0;
                    scores[player1Index] += scores[player2Index];
                    scores[player2Index] = 0;
                    penHoldersIndex[player2Index] = player1Index;
                }
                else if (scores[player1Index] < scores[player2Index]) {
                    playersPen[player2Index] += playersPen[player1Index];
                    playersPen[player1Index] = 0;
                    scores[player2Index] += scores[player1Index];
                    scores[player1Index] = 0;
                    penHoldersIndex[player1Index] = player2Index;
                }
            }
            else if (qType == 2) {
                int playerIndex;
                cin >> playerIndex;
                int penCountOfPlayer = playersPen[playerIndex];
                cout << penCountOfPlayer << "\n";
            }
            else if (qType == 3) {
                int playerIndex;
                cin >> playerIndex;
                int penHolder = penHoldersIndex[playerIndex];
                cout << penHolder << "\n";
            }
        }
    }
    return 0;
}
