#include<bits/stdc++.h>
using namespace std;

float mealcost(float base_meal, int tips, int tax){
    

    float total_meal= base_meal + (base_meal*(tips/100) + (base_meal*(tax/100))) ;

    cout<<total_meal<<endl;
    return total_meal;
}
int main(){

    float a,b,c;
    cin>>a>>b>>c;

    mealcost(a,b,c);

    return 0;
}