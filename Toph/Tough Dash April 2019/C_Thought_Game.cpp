#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for(int i=1; i<n; i++){
        int a,b;
        cin>>a>>b;
        
        if(((a+b)/2)%2==0){
            cout<<"Sadia will be happy."<<endl;
        }else{
            cout<<"Oops!"<<endl;
        }
    }

    return 0;
}