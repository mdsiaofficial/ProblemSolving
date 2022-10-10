#include<bits/stdc++.h>
using namespace std;

mealcost(double base_meal, int tips, int tax){
    

    double total_meal= base_meal + (base_meal*(tips/100) + (base_meal*(tax/100))) ;

    cout<<fixed<<total_meal<<endl;

}
int main(){

    float a,b,c;
    cin>>a>>b>>c;

    mealcost(a,b,c);

    return 0;
}