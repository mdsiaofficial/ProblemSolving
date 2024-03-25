#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
// #define nl cout<<"\n"
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define newl cout<<"\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define io std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

class Solution {
public:
    // This function calculates the number of distinct ways to reach the top of a staircase.
    // The staircase has n steps, and you can climb 1 or 2 steps at a time.
    int climbStairs(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        
        int a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            int t = a;
            a = b;
            b = t + b;
        }
        return b;
    }
};

int main(){io;  


    int n;
    cin>>n;
    
    while (n--)
    {
        string s;
        cin>>s;
        int sum = 0;
        for(int i = 0; i<3; i++){
            sum+=s[i] - '0';
        }
        for(int i = 3; i<6; i++){
            sum-=s[i] - '0';
        }

        if(sum==0){
            YES;
        }else{
            NO;
        }
        
    }
    


    return 0;
}