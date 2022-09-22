#include<bits/stdc++.h>

using namespace std;

int main()
{
    
/*  //my solve:

    int n;
    cin>>n;
    if(n==61){
        cout<<"Brasilia"<<endl;
    }else if(n==71){
        cout<<"Salvador"<<endl;
    }else if(n==11){
        cout<<"Sao Paulo"<<endl;
    }else if(n==21){
        cout<<"Rio de Janeiro"<<endl;
    }else if(n==32){
        cout<<"Juiz de Fora"<<endl;
    }else if(n==19){
        cout<<"Campinas"<<endl;
    }else if(n==27){
        cout<<"Viroria"<<endl;
    }else if(n==31){
        cout<<"Belo Horizonte"<<endl;
    }else{
        cout<<"DDD nao cadastrado"<<endl;
    }
*/


    int ddd;
    cin >> ddd;
    switch(ddd){
        case 11:
            cout << "Sao Paulo"<<endl;
            break;
        case 19:
            cout << "Campinas"<<endl;
            break;
        case 21:
            cout << "Rio de Janeiro"<<endl;
            break;
        case 27:
            cout << "Vitoria"<<endl;
            break;
        case 31:
            cout << "Belo Horizonte"<<endl;
            break;
        case 32:
            cout << "Juiz de Fora"<<endl;
            break;
        case 61:
            cout << "Brasilia"<<endl;
            break;
        case 71:
            cout << "Salvador"<<endl;
            break;
        default:
            cout << "DDD nao cadastrado"<<endl;
            break;

    }
    return 0;
}