#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float a2=a*a;
    float b2=b*b;
    float c2=c*c;

    if(a>=b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(a2==b2+c2){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else


    return 0;
}