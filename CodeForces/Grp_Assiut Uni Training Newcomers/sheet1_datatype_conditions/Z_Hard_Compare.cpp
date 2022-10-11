#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){

    // long long a,b,c,d;
    double a,b,c,d;
    cin>>a>>b>>c>>d;

/*     long long ct=sqrt(a,b);
    long long ct2 =sqrt(c,d); */

/*  try 1: failed
    if(a<=10000 && c<=10000 && b<=1000000 && d<=1000000){

        long long ct=pow(a,b);
        long long ct2 =pow(c,d);

        if(ct>ct2){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }else{
        a=a%100;
        b=b/10;
        c=c%100;
        d=d/10;
        //cout<<a<<endl;
        //cout<<b<<endl;
        
        long long ct=pow(a,b);
        long long ct2 =pow(c,d);

        if(ct>ct2){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }

     */

/*  // try 2 : failed
    if(a<=10000 && c<=10000 && b<=1000000 && d<=1000000){

        long long ct=pow(a,b);
        long long ct2 =pow(c,d);

        if(ct>ct2){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }else{
        a=a%100;
        b=b/10;
        c=c%100;
        d=d/10;
        //cout<<a<<endl;
        //cout<<b<<endl;
        
        long long ct=pow(a,b);
        long long ct2 =pow(c,d);

        if(ct>ct2){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }

 */


    // try 3 :

    // long long power1 = pow(a,b);
    // long long power2 = pow(c,d);
    double power1 = b*log(a);
    double power2 = d*log(c);

    if(power1>power2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}