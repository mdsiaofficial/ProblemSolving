#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    int t;
    int n;
    long int num[1000];
    cin>>t;

    for(n=1; n<=t; n++){
        cin>>num[n]>>num[n+1];
        cin>>num[n+2]>>num[n+3];
        int sum[n]= num[n]+num[n+1]
        int sum[n+1]= num[n+2] + num[n+3];
    }

    for(int m=1; m<=t; m++){
        cout<<"Case "<<m<<sum[m]<<endl<<"Case "<<m+1<<sum[m+1];
    }

    return 0;
}