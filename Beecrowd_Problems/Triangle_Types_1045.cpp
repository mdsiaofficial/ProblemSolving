#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double a2=a*a;
    double b2=b*b;
    double c2=c*c;

    if(a>=b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(a2==b2+c2){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(a2>b2+c2){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(a2<b2+c2){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }


    return 0;
}