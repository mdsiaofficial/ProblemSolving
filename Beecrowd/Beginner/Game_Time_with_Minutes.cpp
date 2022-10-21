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
/*      int sh,sm,eh,em;

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
*/

/* 
    //solve 1
    int ih, im, fh, fm;
    cin>>ih>>im>>fh>>fm;

    int it = (ih*60)+im;
    int ft = (fh*60)+fm;

    int rem = ft-it;

    if(rem <=0){
        rem = rem+(24*60);
        
    }
    int hour = rem/60;
    int minute = rem%60;
    //cout<<it<<endl<<ft<<endl;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;

    //sd
    //cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<sm<<" MINUTO(S)"<<endl;

 */





    // solve 2: mine
    int hs, ms, he, me;
    cin >> hs >> ms >> he >> me;
    int tms = ( hs * 60 )+ ms;
    int tme =( he * 60 )+ me;
    int h;
    int m;
    if(tms<tme){
        h = (tme - tms) / 60;
        m = (tme - tms) % 60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
    }else if(tms>tme){
        h = (1440 - (tms - tme)) / 60;
        m = (1440 - (tms - tme)) % 60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
    }else{
        cout << "O JOGO DUROU " << 24 << " HORA(S) E " << 0 << " MINUTO(S)" << endl;
    }


    return 0;  
}
