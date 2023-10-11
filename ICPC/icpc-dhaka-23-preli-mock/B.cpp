#include<bits/stdc++.h>

#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int fibo (int n){
    if(n==0 || n==1){
        return n;
    }else{
        return fibo(n-1)+fibo(n-2);
    }

}

ll caller=1,callee=0;
pair<ll, ll>findCallerAndCallee(ll n, ll p, ll k, ll caller){
    if(n<p){
        return {LLONG_MIN, LLONG_MIN};
    }

    if(k==1){
        return {caller, n-1};
    }

    ll remain_Call = 0;
    for(ll i=1; i<=p; i++){
        pair<ll, ll>callsinI = findCallerAndCallee(n-i, p, k-remain_Call, caller);
        remain_Call = remain_Call + callsinI.first;

        if(k<=remain_Call){
            return {caller, caller+1};
        }

    }
    k=k-remain_Call;
    n=n+1;
    caller=caller+1;
    return findCallerAndCallee(n,p,k,caller);
    
}

ll pbonacci(ll n, ll p){
    if(n<p) return n;

    ll ans = 0;
    for(ll i=1; i<p; i++){
        ans=ans + pbonacci(n-i, p);
    }
    return ans;
}


int main(){
    
    ll t;
    cin>>t;
    ll n,p,k;
    
    // for(ll i=1; i<=t; i++){
    //     cin>>n>>p>>k;
    //     cout<<pbonacci(n,p)<<endl;
    //     //cout<<"Case "<<i<<": "<<
    // }


    for(ll i=1; i<=t; i++){
        cin>>n>>p>>k;
        pair<ll, ll>res=findCallerAndCallee(n,p,k,1);

        if(res.first == LLONG_MIN){
            cout<<"Case "<<i<<": "<<res.first<<" "<<res.second<<endl;
        }
    }

    return 0;
}
// 4-3, 4-2
// 3-2, 3-1
// 2-1, 2-0
// 1-0

// 5, 3

// 5-4, 4-3, 3-2
// 4-2, 4-1