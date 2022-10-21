#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    
/* 
    float x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"Origem"<<endl;
    }else if(x==0){
        cout<<"Eixo X"<<endl;
    }else if(y==0){
        cout<<"Eixo Y"<<endl;
    }else if(x>0 && y>0){
        cout<<"Q1"<<endl;
    }else if(x<0 && y>0){
        cout<<"Q2"<<endl;
    }else if(x<0 && y<0){
        cout<<"Q3"<<endl;
    }else if(x>0 && y<0){
        cout<<"Q4"<<endl;
    }
    
 */


    double X,Y;
    cin >> X >> Y;
    
    if(X + Y == 0) cout << "Origem" << endl;
    else if(X == 0) cout << "Eixo Y" << endl;
    else if(Y == 0) cout << "Eixo X" << endl;
    else if(X > 0 && Y > 0 ) cout << "Q1" << endl;
    else if(X < 0 && Y > 0) cout << "Q2" << endl;
    else if(X < 0 && Y < 0) cout << "Q3" << endl;
    else if(X > 0 && Y < 0) cout << "Q4" << endl;



    return 0;
}