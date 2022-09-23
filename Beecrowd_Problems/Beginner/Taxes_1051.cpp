#include <bits/stdc++.h>

using namespace std;
int main(){

    // unsolved
    float salary;
    cin>>salary;
    int newsal;
    if(salary >=0 && salary <=2000.00){
        cout<<"Isento"<<endl;
    }else if(salary >=2000.01 && salary <=3000.00){
        newsal= (salary*8)/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<newsal<<endl;
    }else if(salary >=3000.01 && salary <=4500.00){

        newsal=(salary*18)/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<newsal<<endl;

    }else if(salary >4500.00){
        newsal = (salary*28)/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<newsal<<endl;
    }

    return 0;
}
