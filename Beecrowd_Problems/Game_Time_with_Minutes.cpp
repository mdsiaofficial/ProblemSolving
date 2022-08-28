#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    int sh,sm,eh,em;

    cin>>sh>>sm>>eh>>em;

    int hour;
    if(sh<eh){
        hour = eh-sh;
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }else if(sh>eh){
        hour = 24-(sh-eh);
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }else if(sh==eh){
        hour = 24;
        cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }

    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<sm<<" MINUTO(S)"<<endl;

    return 0;
}