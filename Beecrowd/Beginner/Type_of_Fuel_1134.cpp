#include<bits/stdc++.h>
#include<iostream>
#include <iomanip>

using namespace std;

int main(){

    int x;
    int alcohol=0, gasoline=0, diesel=0;

    while (1)
    {
        cin >> x;

        if(x==1){
            alcohol = alcohol + x;
            //cout << "Alcool: " << alcohol << endl;

        }else if(x==2){
            gasoline = gasoline + x;
            //cout << "Gasolina: " << gasoline << endl;
        }else if(x==3){
            diesel = diesel + x;
            //cout << "Diesel: " << diesel << endl;
        }else if(x==4){
            break;
        }

    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;

}


