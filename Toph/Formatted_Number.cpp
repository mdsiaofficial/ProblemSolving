#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){
    long int a;
    cin>>a;
    string b = to_string(a);
    reverse(b.begin(),b.end());

    string newdi ="";
    int c=0;


    for(int i=0;i<b.length();i++){
        if(c==3){
            newdi=newdi+",";
            newdi=newdi+b[i];
            c=0;
        }else{
            newdi=newdi+b[i];
        }
        c++;
    }

    reverse(newdi.begin(),newdi.end());

    //cout<<b<<endl;
    
    cout<<newdi<<endl;

    return 0;
}