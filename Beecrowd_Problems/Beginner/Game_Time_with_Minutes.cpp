#include<bits/stdc++.h> // ei library add korle ar kisu add kora lage nah 
//#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    // Convert all times to 24 hour clock (military time):
    // Convert 8:45 am to 08:45 hours.
    // Convert 3:45 pm to 15:45 hours.
    // Next, Subtract the start time from the end time.
    // Now you have the actual hours worked for the day.
    // Finally to determined total time duration.

    // unsolved //
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
        hour = eh-sh-1;
        minute = 60-(sm-em); // start min , end min theke boro hoile hour theke 1 minus kora lagbe
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




    //sd
    //cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<sm<<" MINUTO(S)"<<endl;

    return 0;
}
