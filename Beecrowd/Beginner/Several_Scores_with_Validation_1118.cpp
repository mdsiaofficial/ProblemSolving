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


/* 
    // solved 1:

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


 */

/*
    // failed here;

    float x;
    float sum = 0;
    int c = 0;
    int again=1;
    while (again==1)
    {
        cin >> x;

        if(x>=0.0, x<=10.0){
            sum = sum + x;
            c++;
        }else{
            cout << "nota invalida" << endl;
        }

        if(c>1){
            cout <<fixed<<setprecision(2)<< "media = " << (sum / 2) << endl;
        }

        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> again;
        if(again!=1 && again!=2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> again;
        }
    }

 */

    float x;
    float arr[3];
    int index = 0;

    while (1)
    {
        while (1)
        {
            cin >> x;

            if (x >= 0 && x <= 10)
            {
                arr[index] = x;
                index++;
            }
            else
            {
                cout << "nota invalida" << endl;
            }
            if (index > 1)
            {
                break;
            }
        }
        float avrg = (arr[0] + arr[1]) / 2.0;
        cout <<fixed<<setprecision(2)<< "media = " << avrg << endl;

        int again;
        index = 0;
        while (1)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> again;
            if(x==1 || x==2){
                break;
            }
        }
        if(x==1){
            continue;
        }else{
            break;
        }
    }

    return 0;

}


