#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){


    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long sum = a*b*c*d;


     
    //cout<<sum<<endl;
    //cout<<sum%100;
    //sum=sum/10;
    //cout<<sum%10<<endl;


    
    //solve 1: done
    if(sum<=9){
        cout<<sum<<endl;
    }else{
        cout<<sum%100<<endl;
    }




/* 
    //solve 2: done
    //The last K digits of N is just N%10^K.

    cout<<sum%(10*10)<<endl;

 */


    return 0;
}