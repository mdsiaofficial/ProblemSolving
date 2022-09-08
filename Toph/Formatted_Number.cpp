#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){
    long int a;
    cin>>a;
    string b = to_string(a);
    reverse(b.begin(),b.end());
    cout<<b<<endl;
    
    

    return 0;
}