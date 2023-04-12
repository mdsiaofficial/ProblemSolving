#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long a[n];
    long long s=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s=s+a[i];
    }
    if(s>0) cout<<s<<endl;
    else cout<<-s<<endl;

    return 0;
}