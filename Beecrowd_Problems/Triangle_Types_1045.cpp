#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    
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

    double A2=A*A;
    double B2=B*B;
    double C2=C*C;
 

    if(A>=B+C){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(A2==B2+C2){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(A2>B2+C2){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(A2<B2+C2){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }else if(A==B && B==C && A==C){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }


    return 0;
}