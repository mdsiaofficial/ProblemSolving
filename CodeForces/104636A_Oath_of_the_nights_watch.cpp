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

int main() {
    int n;
    cin >> n;

    vector<int> strengths(n);

    for (int i = 0; i < n; ++i) {
        cin >> strengths[i];
    }

    int count = 0;

    for (int i = 0; i < n; ++i) {
        bool hasLess = false;
        bool hasGreater = false;

        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if (strengths[j] < strengths[i]) {
                    hasLess = true;
                }
                if (strengths[j] > strengths[i]) {
                    hasGreater = true;
                }
            }
        }

        if (hasLess && hasGreater) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
