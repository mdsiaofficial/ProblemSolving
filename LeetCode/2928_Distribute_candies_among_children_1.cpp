#include <bits/stdc++.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
#define el endl
using namespace std;

class Solution {
public:
    int distributeCandies(int n, int limit) {
        int result = 0;
        for (int i = 0; i <= limit; i++) {
            for (int j = 0; j <= limit; j++) {
                int k = n - (i + j);
                if ((0 <= k) && (k <= limit)) result++;
            }
        }
        return result;
    }
};
int main() {
    cout << "Done";
    return 0;
}