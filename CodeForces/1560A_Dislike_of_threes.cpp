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


class Codeforces{

public:
    int dislike(int pos){
        vector<int>dis;
        // int dis [1001];
        dis.push_back(0);

        for(int i=1; i<pos*2; i++){
            if(i%3!=0 and i%10!=3){
                dis.push_back(i);
                // dis[i] = i;
            }
        }
        return dis[pos];
    }
};

int dddd(int pos){
    // vector<int>dis;
    int dis [pos*2];
    // dis.push_back(0);
    dis[0] = 0;
    int c = 1;
    for(int i=1; i<pos*2; i++){
        if(i%3!=0 and i%10!=3){
            // dis.push_back(i);
            dis[c] = i; c++;
        }
    }

    return dis[pos];
}

int main() {
    Codeforces soln;

    int t;
    cin>>t;
    while (t--)
    {   
        int pos;
        cin>>pos;
        cout<<dddd(pos)<<endl;    
    }
    
    return 0;
}