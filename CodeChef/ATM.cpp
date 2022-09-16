#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    float total;

    cin>>amount>>total;
/* 
    if(amount<total && amount%5==0){
        //stod(total);
        //stod(amount);

        //double a=(double)amount;
        //double t=(double)total;
        //double remain= total-amount-0.50;
        cout<<fixed<<setprecision(2)<<total-amount-0.50<<endl;
    }else if(amount>total || amount%5!=0){
        //stof(total);
        //stof(amount);
        //double a=(double)amount;
        //double t=(double)total;
        //double remain=t;
        cout<<fixed<<setprecision(2)<<total<<endl;
    }
 */


    if((amount%5==0) && (total-amount-0.50>=0)){
        cout<<fixed<<setprecision(2)<<total-amount-0.50<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<total<<endl;
    }
    
    return 0;
}