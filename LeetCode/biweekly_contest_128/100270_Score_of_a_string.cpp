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

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};




class Solution {
public:
    
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++){
            sum += abs(s[i] - s[i+1]);
        }
        return sum;
    }
};

int main() {
    Solution soln;

    string s="zaz";
    // int sum = abs(s[0] - s[1]);
    // cout<<sum;

    cout<<soln.scoreOfString(s);
    
    return 0;
}
