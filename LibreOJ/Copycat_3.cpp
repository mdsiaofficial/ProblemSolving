#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    int t;
    int n;
    long long int num[1000];
    cin>>t;

    for(n=1; n<=t; n++){
        cin>>num[n];
    }

    for(int m=1; m<=t; m++){
        cout<<num[m]<<endl;
    }

    return 0;
}