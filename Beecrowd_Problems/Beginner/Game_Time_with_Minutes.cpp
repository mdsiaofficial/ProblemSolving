#include<bits/stdc++.h> // ei library add korle ar kisu add kora lage nah 
//#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    int sh,sm,eh,em;

    cin>>sh>>sm>>eh>>em;

    int hour;
    int minute;
    if(sh<eh && sm<em){
        hour = eh-sh;
        minute = em-sm;
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh>eh && sm>em){
        hour = 24-(sh-eh)-1;
        minute = 60-(sm-em);
        //minute = 
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh==eh && sm==em){
        hour = 24;
        minute = 0;
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh<eh && sm>em){
        hour = eh-sh;
        minute = 60-(sm-em);
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh>eh && sm<em){
        hour = 24-(sh-eh)-1;
        minute = em-sm;
        //minute = 
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh==eh && sm==em){
        hour = 24;
        minute = 0;
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh==eh && sm>em){
        hour = 24;
        minute = 60-(sm-em);
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }else if(sh==eh && sm<em){
        hour = 24;
        minute = em-sm;
        //cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }


    //cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<sm<<" MINUTO(S)"<<endl;

    return 0;
}
