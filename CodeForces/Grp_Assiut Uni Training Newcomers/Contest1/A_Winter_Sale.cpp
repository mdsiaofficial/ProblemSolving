#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double per, price;
    cin>>per>>price;
    
    double mainprice=((100*price)/(100-per));
    cout<<fixed<<setprecision(2)<<mainprice<<endl;

    return 0;
}