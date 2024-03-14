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

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z


// solved //


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int temp;
        vector<int>pos;
        for(int i=0; i<n; i++){
            cin>>temp;
            pos.push_back(temp);
        }
        
        int stringLength;
        vector<string>moves;
        string s;
        for(int i=0; i<n; i++){
            cin>>stringLength>>s;
            moves.push_back(s);
        }

        
        for (string ss: moves)
        {
            int count = 0;
            for (int i = 0; i <ss.length() ; i++)
            {
                if(ss[i]=='U'){
                    count--;

                }else if(ss[i]=='D'){
                     count++;
                }
                pos[i] +=count;
            }

            
        }

        for(int x: pos){
            cout<<x<<" ";
        }

        cout<<nl;
    }
    

    return 0;
}