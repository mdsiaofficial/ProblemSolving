#include<bits/stdc++.h>
using namespace std;

#define pi 3.14159266
int main(){

    //unsolved
    
    int t;
    cin>>t;
    int c=1;
    while(t--){
        double r;
        cin>>r;
        double areaofcir=pi*r*r;
        double areaofsq=(r*2)*(r*2);
        double areaofblue=areaofsq-areaofcir;
        cout<<"Case "<<c<<": "<<fixed<<setprecision(2)<<areaofblue<<endl;
        c++;
    }

    return 0;
}