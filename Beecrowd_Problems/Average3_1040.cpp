#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    float n1,n2,n3,n4;

    cin>>n1>>n2>>n3>>n4;

    float average= (n1+n2+n3+n4)/4;

    
    cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
    if(average>=7.0){
        cout<<"Aluno aprovado."<<endl;

    }else if(average<5.0){
        cout<<"Aluno em exame."<<endl;
    }


    return 0;
}