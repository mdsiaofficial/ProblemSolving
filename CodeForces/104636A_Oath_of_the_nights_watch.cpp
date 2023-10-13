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

    int min_strength = strengths[0];
    int max_strength = strengths[0];

    int count = 0;

    for (int i = 1; i < n; ++i) {
        if (strengths[i] < min_strength) {
            min_strength = strengths[i];
        } else if (strengths[i] > max_strength) {
            max_strength = strengths[i];
        } else {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}