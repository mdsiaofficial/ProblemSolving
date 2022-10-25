#include<bits/stdc++.h>
#include<iostream>
#include <iomanip>

using namespace std;

int main(){
/* 

    // try 1 failed
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




 */

/* 
        // try 2 solvedggg
    float x, y, z, n;
    y = 0;
    z = 0;
    n = 0;
    while(true){
        cin >> x;
        if(n == 1){
                    
            if(x == 2){
                break;
            }else if(x == 1){
                n = 0;
                continue;
            }
            else{
                cout << "novo calculo (1-sim 2-nao)n";
                continue;
            
            }
            
        }else{
            if(x < 0 || x > 10){
                cout << "nota invalidan";
            }
            else if(z == 0){
                y = x;
                z = 1;
            }else{
                printf("media = %.2fn", (x+y)/2.00);
                z = 0;
                n = 1;
            }
        }
        
        if(n == 1) cout << "novo calculo (1-sim 2-nao)n";
                     
    }    



 */




    float x = -1, y = -1;
    int value = 1;
    while(value == 1)
    {
        do{
            cin >> x;
            if(x < 0 || x > 10)
                cout << "nota invalida" << endl;
        }while(x < 0 || x > 10);
        do{
            cin >> y;
            if(y < 0 || y > 10)
                cout << "nota invalida" << endl;
        }while(y < 0 || y > 10);
        cout << "media = " << fixed << setprecision(2) << ((x + y) / 2) << endl;
        
        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> value;
        }while(value != 1 && value != 2);
    }

    return 0;

}


