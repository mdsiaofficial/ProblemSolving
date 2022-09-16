#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount, total;

    cin>>amount>>total;

    if(amount<total && amount%5==0){
        //stod(total);
        //stod(amount);

        double a=(double)amount;
        double t=(double)total;
        double remain= t-a-0.50;
        cout<<setprecision(2)<<remain<<endl;
    }else if(amount>total || amount%5!=0){
        /* stof(total);
        stof(amount); */
        double a=(double)amount;
        double t=(double)total;
        double remain=t;
        cout<<t<<endl;
    }

    return 0;
}