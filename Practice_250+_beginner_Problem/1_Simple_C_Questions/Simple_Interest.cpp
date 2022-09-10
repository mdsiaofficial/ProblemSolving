#include <bits/stdc++.h>
using namespace std;
int main(){

    int principal, time, rate, SimIn;

    cin>>principal>>time>>rate;

    SimIn = (principal*time*rate)/100;
    
    cout<<SimIn<<endl;

    return 0;
}