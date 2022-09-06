#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){

    long long a,b,c,d;
    cin>>a>>b>>c>>d;

/*     long long ct=sqrt(a,b);
    long long ct2 =sqrt(c,d); */

/* 
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


    return 0;
}