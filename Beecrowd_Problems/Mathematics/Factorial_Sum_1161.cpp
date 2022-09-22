#include <bits/stdc++.h>

using namespace std;
int main(){

    long long a,b;

    cin>>a>>b;
    long long factA=1;
    long long factB=1;
    

    for(int i=a; i>=1; i--){
        // a=a*i;
        factA*=i;
        //cout<<a<<endl;
    }
    for(int i=b; i>=1; i--){
        // a=a*i;
        factB*=i;
        //cout<<a<<endl;
    }
    cout<<factA+factB<<endl;
    return 0;
}
