#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    float total;

    cin>>amount>>total;

    if((amount%5==0) && (total-amount-0.50>=0)){
        cout<<fixed<<setprecision(2)<<total-amount-0.50<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<total<<endl;
    }
    
    return 0;
}