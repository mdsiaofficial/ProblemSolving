#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,n,a;
    cin>>n>>l>>a;
    int t[n];
    int lt[n];
    int total=l;
    for (int i = 0; i < n; i++)
    {
        cin>>t[i]>>lt[i];
        total=total-lt[i];
    }
    cout<<total/a;

    return 0;
}