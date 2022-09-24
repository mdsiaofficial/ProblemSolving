#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long double per, price;
    cin>>per>>price;
    
    long double mainprice=((100*price)/(100-per));
    cout<<fixed<<setprecision(2)<<mainprice<<endl;

    return 0;
}