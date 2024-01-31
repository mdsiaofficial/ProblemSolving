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
    double mySqrt(double x) {
        double r = x;
        double precision = 10e-10;
        ll t=20;
        // while (abs(x - r * r) > precision) {
        //     r = (r + x / r) / 2;
        // }
        
        while (t--) {
            r = (r + x / r) / 2;
        }
        
        // return (r);
        return floor(r);
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        vector<int> beautifulLengths;
        int currentLength = 1;
        int maxLength = 1;

        // Calculate initial beautiful substring length
        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i - 1]) {
                currentLength++;
            } else {
                currentLength = 1;
            }
            maxLength = max(maxLength, currentLength);
        }
        beautifulLengths.push_back(maxLength);

        // Process queries
        while (q--) {
            char c;
            cin >> c;

            s += c;

            // Update beautiful substring length
            if (s[n] == s[n - 1]) {
                currentLength++;
            } else {
                currentLength = 1;
            }
            maxLength = max(maxLength, currentLength);

            beautifulLengths.push_back(maxLength);
        }

        // Output result for the test case
        for (int length : beautifulLengths) {
            cout << length << " ";
        }
        cout << endl;
    }

    return 0;
}



/* 

Another Good String
A string is called beautifu/if all of its characters are the same.
For example, "a", "bbb" and "aaaaa" are beautiful, while "ab" and "try" are not.
You are given a string S of length N consisting of lowercase English letters.
You are also given Q updates to be performed on S. Each update consists of a single character that must be appended to S (so the
length of S increases by 1).
After each update, and also before any updates are performed, find the length of the longest beautiful substring of S.
Input Format
• The first line of input contains a single integer T, denoting the number of test cases.
• Each test case consists of multiple lines of input.
o The first line of each test case contains two space-separated integers N and Q— the initial size of the string S and the
number of queries.
o The second line contains the string S, consisting of N lowercase letters.
o The next Q lines each contain a single character c, which is to be appended to S.
Output Forma
For each testcase output a single line containing Q -F I space-separated integers .40, A1, , Q
Ao is the answer for the initial string S, and for i 2 1, Ai must be the answer to the string after the ith update.

Constraints
• 1 < 105
• Every letter in the input (both in the string S and the updates) is a lowercase English letter.
• The sum of N and the sum of Q over all the test cases both do not exceed 105
Sample 1:
Input
2
annncc
c
c
c
d
93
ananymous
Output
33455
1123


Explanation:
Test case 1: The process is as follows:
•
•
•
•
•
Initially, the longest beautiful substring of S is "nnn", with length 3.
c is appended to S, so it becomes "annnccc". Its longest beautiful substring is either "nnn" or "ccc", still with length 3.
c is appended again, and S becomes "annncccc". Its longest beautiful substring is "cccc" with length 4.
c is appended again, and S becomes "annnccccc". Its longest beautiful substring is -ccccc" with length 5.
d is appended in S, making it "annncccccd". The longest beautiful substring remains "ccccc".



 */