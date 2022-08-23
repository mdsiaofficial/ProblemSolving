#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    int t;
    int n;
    int num[1000];
    cin>>t;

    for(n=0; n<=t; n++){
        cin>>num[n];
    }

    for(int m=0; m<=t; m++){
        cout<<num[m];
    }

    return 0;
}