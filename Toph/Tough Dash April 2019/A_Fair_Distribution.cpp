#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    //cout<<y%3

    for(int i=0; y%x==0; i++){
        y=y+1;

    }
    cout<<i<<endl;
    
    return 0;
}