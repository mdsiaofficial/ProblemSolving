#include<bits/stdc++.h>
//#include<iostream>

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
    return 0;

}


