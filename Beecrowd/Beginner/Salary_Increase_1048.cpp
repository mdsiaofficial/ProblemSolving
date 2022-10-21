#include<bits/stdc++.h>

using namespace std;

int main(){

/*
    float salary;
    cin>>salary;
    float ext;
    if(salary >= 0 && salary <=400.00){

        ext = (salary*(15/100));
        salary=salary+ext;
        // cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        // cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<ext<<endl;
        // cout<<fixed<<setprecision(2)<<"Em percentual: 15 %"<<endl;

    }else if(salary >= 400.01 && salary <=800.00){

        ext = (salary*(12/100));
        salary=salary+ext;
        // cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        // cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<ext<<endl;
        // cout<<fixed<<setprecision(2)<<"Em percentual: 12 %"<<endl;

    }else if(salary >= 800.01 && salary <=1200.00){

        ext = (salary*(10/100));
        salary=salary+ext;
        // cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        // cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<ext<<endl;
        // cout<<fixed<<setprecision(2)<<"Em percentual: 10 %"<<endl;

    }else if(salary >= 1200.01 && salary <=2000.00){

        ext = (salary*(7/100));
        salary=salary+ext;
        // cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        // cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<ext<<endl;
        // cout<<fixed<<setprecision(2)<<"Em percentual: 7 %"<<endl;

    }else if(salary > 2000.00){

        ext = (salary*(4/100));
        salary=salary+ext;
        // cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary+ext<<endl;
        // cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<ext<<endl;
        // cout<<fixed<<setprecision(2)<<"Em percentual: 4 %"<<endl;

    }

    cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary+ext<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<ext<<endl;
    cout<<fixed<<setprecision(2)<<"Em percentual: 4 %"<<endl;


*/

    float sal;
    float incre;
    int per;
    cin>>sal;
    //(sal*15)/100
    if(sal>=0 && sal<=400){
        incre= (sal*15)/100;
        sal=sal+incre;
        per=15;
    }else if(sal>=400 && sal<=800){
        incre= (sal*12)/100;
        sal=sal+incre;
        per=12;
    }else if(sal>=800 && sal<=1200){
        incre= (sal*10)/100;
        sal=sal+incre;
        per=10;
    }else if(sal>=1200 && sal<=2000){
        incre= (sal*7)/100;
        sal=sal+incre;
        per=7;
    }else if(sal>2000){
        incre= (sal*4)/100;
        sal=sal+incre;
        per=4;
    }

    cout<< fixed << setprecision(2) <<"Novo salario: "<<sal<<endl;
    cout<< fixed << setprecision(2) <<"Reajuste ganho: "<<incre<<endl;
    cout<< fixed << setprecision(2) <<"Em percentual: "<<per<<" %"<<endl;

    return 0;

}
