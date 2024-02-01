#include<bits/stdc++.h>
#define ll long long
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
#define nl cout<<"\n"
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
 
 
int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int cho, ca;
        cin >> cho >> ca;

        int tcho = cho * 2;
        int tca = ca * 5;

        if(tcho>tca){
            cout << "Chocolate" << endl;

        }else if(tcho<tca){
            cout << "Candy" << endl;
        }else if(tcho==tca){
            cout << "Either" << endl;
        }
    }
    return 0;
}