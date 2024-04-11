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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */



int main() {

    int t;
    cin>>t;
    while (t--)
    {
        string s;cin>>s;

        // way 1:

        // for(int i=0; i<s.length()-1; i++){
        //     if(s[i]=='i' && s[i+1] == 't'){
        //         cout<<"YES"<<endl;
        //         break;
        //     }

        // }
        // cout<<"NO"<<endl;

        // way 2:

        if(s.find("it")!=s.npos) cout<<"YES\n";
        else cout<<"NO\n";
    }
    

    return 0;
}
