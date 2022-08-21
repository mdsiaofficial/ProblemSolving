#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    float x,y;

    cin>>x>>y;

    //cout<<x<<endl<<y;

    if(x==0 && y==0){
        cout<<"Origem"<<endl;
    }else if(x>0 && y>0){
        cout<<"Q1"<<endl;
    }else if(x<0 && y>0){
        cout<<"Q2"<<endl;
    }else if(x<0 && y<0){
        cout<<"Q3"<<endl;
    }else if(x>0 && y<0){
        cout<<"Q4"<<endl;
    }else if(x==0 && y>0 || y<0){
        cout<<"Eixo X"<<endl;
    }else if(x>0 || x<0 && y==0){
        cout<<"Eixo Y"<<endl;
    }
    
    return 0;
}