#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    double a,b,c;

    cin>>a>>b>>c;

     
    double A,B,C;
/*
    // this if else will find the decreasing order 
    // eitai koi jani vul hoise :(
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

 */ 

/* // eita stackoverflow er code, kam kore nah !!!
    if(a>b){
        A=a;
        B=b;
    }else{
        A=b;
        B=a;
    }
    if(A>c){
        C=A;
        if(B>c){
            A=B;
            B=c;
        }else{
            A=c;
        }
    }else{
        A=c;
    }
 */

    // at last eida kam korse...tao abr floting number re output e int banay dey :(
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
    }else{
        A=c;
        if(a>b){
            B=a;
            C=b;
        }else{
            B=b;
            C=a;
        }
    }



    cout<<endl<<A<<endl<<B<<endl<<C<<endl;




/* 
    double A2=A*A;
    double B2=B*B;
    double C2=C*C;
 
    // these conditions are logics of triangle

    if(A>=B+C){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(A2==(B2+C2)){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(A2>(B2+C2)){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(A2<(B2+C2)){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    
    if(A==B && B==C && A==C){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }else if(A==B || A==C || B==C){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

 */
    return 0;
}