#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    float n1,n2,n3,n4;
    float score;

    cin>>n1>>n2>>n3>>n4;
    //cin>>score;

    float average= ((n1*2)+(n2*3)+(n3*4)+n4)/10.0;
    //float average2 = (average+score)/2;
    
    cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
    //cout<<"Nota do exame: "<<fixed<<setprecision(1)<<score<<endl;

    if(average>=7.0){
        //cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
        cout<<"Aluno aprovado."<<endl;
        //cout<<"Nota do exame: "<<fixed<<setprecision(1)<<score<<endl;
        //cout<<"Aluno aprovado."<<endl;
        //cout<<"Media final: "<<fixed<<setprecision(1)<<average2<<endl;

    }else if(average>=5.0 && average<=6.9){
        //cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
        //cout<<"Aluno reprovado."<<endl;
        cout<<"Aluno em exame."<<endl;
        //cout<<"Nota do exame: "<<fixed<<setprecision(1)<<score<<endl;
        //<<"Aluno reprovado."<<endl;
        //cout<<"Media final: "<<fixed<<setprecision(1)<<average2<<endl;
        cin>>score;
        float average2 = (average+score)/2.0;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<score<<endl;
        if(average2>5.0){
            cout<<"Aluno aprovado."<<endl;
        }else{
            cout<<"Aluno reprovado."<<endl;
        }

        cout<<"Media final: "<<fixed<<setprecision(1)<<average2<<endl;
        
    }else if(average<5.0){
        //cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
        //cout<<"Aluno em exame."<<endl;
        cout<<"Aluno reprovado."<<endl;
        //cout<<"Nota do exame: "<<fixed<<setprecision(1)<<score<<endl;
        //cout<<"Aluno aprovado."<<endl;
        //cout<<"Media final: "<<fixed<<setprecision(1)<<average2<<endl;
        
    }

    

    



    return 0;
}
