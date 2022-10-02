#include <bits/stdc++.h>

using namespace std;
int main(){

    // unsolved
    float salary;
    cin>>salary;


    /*
    float newsal;
    if(salary >=0 && salary <=2000.00){
        cout<<"Isento"<<endl;
    }else if(salary >=2000.01 && salary <=3000.00){
        newsal=salary-(salary*8)/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<newsal<<endl;
    }else if(salary >=3000.01 && salary <=4500.00){

        newsal=salary-(salary*18)/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<newsal<<endl;

    }else if(salary >4500.00){
        newsal =salary-(salary*28)/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<newsal<<endl;
    }

    */

/*
    float taxes_in, tax_out;

    if(salary>=0 && salary<=2000.00){
        cout<<"Isento"<<endl;
    }else if(salary>=2000.01 && salary <=3000.00){
        taxes_in=salary-2000;
        taxes_out = taxes_in*8/100;
        cout<<fixed<<setprecision(2)<<"R$ "<<taxes_in<<endl;
        
    }else if(salary >=3000.01 && salary <=4500.00){
        

    }else if(salary > 4500.00){
        
    }
*/




    //salary = salary - 2000;
    float tax;
    if(salary >= 0 && salary <= 2000.00){

        cout<<"Isento"<<endl;

    }else if(salary >= 2000.01 && salary <=3000.00){
        
        salary = salary - 2000.00;
        tax = salary * 8/ 100;

        cout<<fixed<<setprecision(2)<<"R$ "<<tax<<endl;
    }else if(salary >=3000.01 && salary <=4500.00){
        salary = salary - 2000.00;
        tax = (1000*8/100) + ((salary-1000)*18/100);
        //float temp_2to3 = 
        cout<<fixed<<setprecision(2)<<"R$ "<<tax<<endl;
    }else{
        salary = salary - 2000.00;
        tax = (1000*8/100) + (1500*18/100) + ((salary-2500)*28/100);
        cout<<fixed<<setprecision(2)<<"R$ "<<tax<<endl;
    }


    return 0;
}
