#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double a2=a*a;
    double b2=b*b;
    double c2=c*c;
 
    int A,B,C;
    if(a>b && a>c){
        A=a;
        if(b>c){
            B=b;
            C=c;
        }else{
            B=c;
            C=b;
        }

    }else if(b>a && b>c){
        A=b;
        if(a>c){
            B=a;
            C=c;
        }else{
            B=c;
            C=a;
        }
    }else if(c>a && c>b){
        A=c;
        if(a>b){
            B=a;
            C=b;
        }else{
            B=b;
            C=a;
        }
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