#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double a2=a*a;
    double b2=b*b;
    double c2=c*c;

    if(a>b && a>c){
        int A=a;
        int B=b;
        int C=c;
    }else if(b>a && b>c){
        int A=b;
        int B=a;
        int C=c;
    }else if(c>a && c>b){
        int A=c;
        int B=a;
        int C=b;
    }


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