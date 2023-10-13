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
    vector<int> less(n, 0);  // To store the count of stewards with less strength.
    vector<int> greater(n, 0);  // To store the count of stewards with greater strength.
    
    set<int> lessSet;  // To keep track of stewards with less strength.
    set<int> greaterSet;  // To keep track of stewards with greater strength.

    for (int i = 0; i < n; ++i) {
        cin >> strengths[i];
    }

    // Build the 'less' and 'greater' arrays and sets.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (strengths[i] > strengths[j]) {
                greater[i]++;
                less[j]++;
                greaterSet.insert(i);
                lessSet.insert(j);
            } else if (strengths[i] < strengths[j]) {
                less[i]++;
                greater[j]++;
                lessSet.insert(i);
                greaterSet.insert(j);
            }
        }
    }

    int count = 0;

    // Count the stewards that meet the criteria.
    for (int i = 0; i < n; ++i) {
        if (greater[i] > 0 && less[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}