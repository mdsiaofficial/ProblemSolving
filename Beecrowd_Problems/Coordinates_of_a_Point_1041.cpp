#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    float x,y;

    cin>>x>>y;

    cout<<x<<endl<<y;

    if(x==0 && y==0){
        cout<<"Origem";
    }else if(x>0 && y>0){
        cout<<"Q1";
    }else if(x<0 && y>0){
        cout<<"Q2";
    }else if(x<0 && y<0){
        cout<<"Q3";
    }else if(x>0 && y<0){
        cout<<"Q4";
    }
    
    return 0;
}