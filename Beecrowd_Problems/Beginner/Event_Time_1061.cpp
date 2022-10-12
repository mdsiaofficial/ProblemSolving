#include<bits/stdc++.h>
using namespace std;
int main(){

    //input variables
    string s1,s2;
    int day_s;
    int day_e;
    int hour_s, minute_s, second_s;
    int hour_e, minute_e, second_e;

    char a, b, c, d; //eida ajaira just colon input nibo 
    // output variables
    int day=0, hour=0, minute=0, second=0;

    // taking input
    cin >> s1 >> day_s;
    cin >> hour_s >> a >> minute_s >> b >> second_s;

    cin >> s2 >> day_e;
    cin >> hour_e >> c >> minute_e >> d >> second_e;


/*  //failed with this code

    //converting all to second
    int start_sec = (hour_s * 60 * 60) + (minute_s * 60) + second_s;
    int end_sec = (hour_e * 60 * 60) + (minute_e * 60) + second_e;


    if(start_sec<end_sec){
        hour = (end_sec - start_sec) / (60 * 60);
        int temp = (end_sec - start_sec) % (60 * 60);
        minute = temp / 60;
        second = temp % 60;

        cout << hour << endl
             << minute << endl
             << second << endl;
            
    }else if (start_sec > end_sec){
        hour = (86400-(end_sec - start_sec)) / (60 * 60);
        int temp = (86400 - (end_sec - start_sec)) % (60 * 60);
        minute = temp / 60;
        second = temp % 60;

        cout << hour << endl
             << minute << endl
             << second << endl;
    }else{
        
    }
*/
    // getline(cin, day); // this code helps to take input with whitespace
    //cin >> day;
    
    /*cout << day_s << endl
         << day_e << endl
         << hour_s << endl
         << minute_s << endl
         << second_s << endl
         << hour_e << endl
         << minute_e << endl
         << second_e << endl;
    */


    

    //converting all to second
    int start_sec = (day_s*24*60*60)+(hour_s * 60 * 60) + (minute_s * 60) + second_s;
    int end_sec =(day_e*24*60*60)+(hour_e * 60 * 60) + (minute_e * 60) + second_e;
    int deff= end_sec - start_sec;
    

/* 
    // solve 1: done ; 
    // solve by calculating
    day= deff/(24*60*60);
    hour= (deff - (day*24*60*60))/(60*60);
    minute= (deff - (day*24*60*60) - (hour*(60*60)))/60;
    second = (deff - (day*24*60*60) - (hour*(60*60)) - (minute*60));

 */


/*  // solved. solve 2
    // solve by looping: Success
    for(int i=start_sec; i<end_sec; i++){
        second++;
        if(second==60){
            minute++;
            second=0;

            if(minute==60){
                hour++;
                minute=0;

                if(hour==24){
                    day++;
                    hour=0;
                }
            }
        }
    }

 */




/* 
    //solve 3: 
    day= day_e - day_s;
    hour= hour_e- hour_s;
    minute= minute_e - minute_s;
    second= second_e - second_s;

    if(second<0){
        second=second+60;
        minute-=1;
    }
    if(minute<0){
        minute+=60;
        hour-=1;
    }
    if(hour<0){
        hour+=24;
        day-=1;
    }
 */




    // solve 4:
    day = deff/(24*60*60);
    int temp = deff%(24*60*60);
    hour = temp/(60*60);
    temp = temp%(3600);
    minute = temp/60;
    temp = temp % 60;
    second = temp;



    


    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<minute<<" minuto(s)"<<endl;
    cout<<second<<" segundo(s)"<<endl;



    return 0;
}