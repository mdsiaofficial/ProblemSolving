#include<bits/stdc++.h>
using namespace std;
void x(int n){
    int h=n;
    if(n-(h-1)==n) return;
    cout<<n-(h-1)<<endl; x(n+1);
}
int main(){
    int n;
    cin>>n;
    x(n);
}