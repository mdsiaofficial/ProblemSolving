#include<iostream>
//#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision

using namespace std;

int main(){

    int start, end;
    cin>>start>>end;
/* 
    int hour = 24-start;
    int hout = hour + end;

    cout<<"O JOGO DUROU "<<hout<<" HORA(S)"<<endl;
 */
    int count=1;
    if(start>end){
        for(int i =start; i<=24; i++){
            count++;
            //cout<<endl<<count<<endl<<i<<endl<<start<<endl;
            
        }
        cout<<"O JOGO DUROU "<<count<<" HORA(S)"<<endl;
    }else if(start==0||end==0){
        cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
    }else{
        for(int i =start; i<=end; i++){
            count++;
            //cout<<endl<<count-2<<endl<<i<<endl<<start<<endl;
        }
        cout<<"O JOGO DUROU "<<count-2<<" HORA(S)"<<endl;
    }
    
    //MAYBE SOLVED

    return 0;
}
