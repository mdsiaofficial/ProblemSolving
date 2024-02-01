#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int c = 0;
        int i;
        int start = 1;
        i = start;
        while (n--) {
            sum += i;
            i++;
            c++;
            if (c == 7) {
                c = 0;
                start++;
                i = start;
            }
        }

        return sum;
    }
};

int main() {
    Solution soln;

    cout<<soln.totalMoney(8);

    return 0;
}