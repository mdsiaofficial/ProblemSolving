#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{

    float x,y;

    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"Origem"<<endl;
    }else if(x==0 && y<0 || y>0){
        cout<<"Eixo Y"<<endl;
    }else if(x>0 || x<0 && y==0){
        cout<<"Eixo X"<<endl;
    }else if(x>0 && y>0){
        cout<<"Q1"<<endl;
    }else if(x>0 && y<0){
        cout<<"Q4"<<endl;
    }else if(x<0 && y>0){
        cout<<"Q2"<<endl;
    }else if(x<0 && y<0){
        cout<<"Q3"<<endl;
    }else

    return 0;
}