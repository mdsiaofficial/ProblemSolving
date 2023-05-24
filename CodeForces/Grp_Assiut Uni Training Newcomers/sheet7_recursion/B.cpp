#include<bits/stdc++.h>
using namespace std;

void y(int n){

    if(n==0) return;
    cout<<n;
    if(n>1) cout<<" ";
    y(n-1);
}
int main(){
    int n;
    cin>>n;
    y(n);
}