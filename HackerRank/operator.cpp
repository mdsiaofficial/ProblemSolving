#include<bits/stdc++.h>
using namespace std;
/* 
float mealcost(float base_meal, int tips, int tax){
    

    float total_meal= base_meal + (base_meal*(tips/100) + (base_meal*(tax/100))) ;

    cout<<total_meal<<endl;
    //Math.round
    return total_meal;
}
 */
int main(){

    float base_meal, tips, tax;
    cin>>base_meal>>tips>>tax;

    cout<<round(base_meal + (base_meal*(tips/100.0) + (base_meal*(tax/100.0))))<<endl;



    //mealcost(a,b,c);

    return 0;
}