#include<iostream>
//#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision

using namespace std;

int main(){

    int start, end;
    cin>>start>>end;

    int hour = 24-start;
    int hout = hour + end;

    cout<<"O JOGO DUROU "<<hout<<" HORA(S)"<<endl;

    return 0;
}