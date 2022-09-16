#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount, total;

    cin>>amount>>total;

    if(amount<total && amount%5==0){
        //stod(total);
        //stod(amount);

        float a=(float)amount;
        float t=(float)total;
        cout<<fixed<<setprecision(2)<<t-a-0.50<<endl;
    }else if(amount>total || amount%5!=0){
        /* stof(total);
        stof(amount); */
        float a=(float)amount;
        float t=(float)total;

        cout<<fixed<<setprecision(2)<<t<<endl;
    }

    return 0;
}