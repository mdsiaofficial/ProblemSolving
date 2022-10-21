#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int main(){

    float a,b;
    cin>>a;
    if(a<0.0 && a>10.0){
        cout<<"nota invalida"<<endl;
        cin>>a;
    }

    cin>>b;
    if(b<0.0 && b>10.0){
        cout<<"nota invalida"<<endl;
        cin>>b;
    }

    float media = (a+b)/2;
    cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;

    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    int x;
    cin>>x;
    if(x!=1 && x!=2){
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
    }else{
        cin>>a;
        if(a<0.0 && a>10.0){
            cout<<"nota invalida"<<endl;
            cin>>a;
        }

        cin>>b;
        if(b<0.0 && b>10.0){
            cout<<"nota invalida"<<endl;
            cin>>b;
        }

        float media = (a+b)/2;
        cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;
    }
    return 0;

}


