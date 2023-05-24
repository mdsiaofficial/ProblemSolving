#include<bits/stdc++.h>
using namespace std;
void x(int n){
    if(n==0) return;
    cout<<"I love recursion\n"; 
    x(n-1);
    
}
int main(){
    int n;
    cin>>n;
    x(n);
}