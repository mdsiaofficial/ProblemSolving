#include<bits/stdc++.h>
using namespace std;
int main(){

/*
    cout << "Dia";
    int day_start;
    cin >> day_start;
    int hour_s, minute_s, second_s;
    cin >> hour_s;
    cout << ":";
    cin >> minute_s;
    cout << ":";
    cin >> second_s;

    cout << "Dia";
    int day_end;
    cin >> day_end;
    int hour_e, minute_e, second_e;
    cin >> hour_e;
    cout << ":";
    cin >> minute_e;
    cout << ":";
    cin >> second_e;

 */
    //input variables
    string s1,s2;
    int day_s;
    int day_e;
    int hour_s, minute_s, second_s;
    int hour_e, minute_e, second_e;
    char a, b, c, d;
    // output variables
    int day, hour, minute, second;

    // taking input
    cin >> s1 >> day_s;
    cin >> hour_s >> a >> minute_s >> b >> second_s;

    cin >> s2 >> day_e;
    cin >> hour_e >> c >> minute_e >> d >> second_e;


    //converting all to second
    int start_sec = (hour_s * 60 * 60) + (minute_s * 60) + second_s;
    int end_sec = (hour_e * 60 * 60) + (minute_e * 60) + second_e;


    if(start_sec<end_sec){
        hour = (end_sec - start_sec) / (60 * 60);
        int temp = (end_sec - start_sec) % (60 * 60);
        minute = temp / 60;
        second = temp % 60;
        
    }
    else if (start_sec > end_sec)
    {
        hour = (86400-(end_sec - start_sec)) / (60 * 60);
        int temp = (86400 - (end_sec - start_sec)) % (60 * 60);
        minute = temp / 60;
        second = temp % 60;
    }else{
        
    }
    // getline(cin, day); // this code helps to take input with whitespace
    //cin >> day;
    cout << day_s <<endl<<day_e<<endl<<hour_s<<endl<<minute_s<<endl<<second_s<<end;

    return 0;
}