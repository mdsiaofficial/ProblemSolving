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

    string s1,s2;
    int day_s;
    int day_e;
    int hour_s, minute_s, second_s;
    int hour_e, minute_e, second_e;

    cin >> s1 >> day_s;
    cin >> hour_s >> minute_s >> second_s;

    cin >> s2 >> day_e;
    cin >> hour_e >> minute_e >> second_e;

    int start_sec = (hour_s * 60 * 60) + (minute_s * 60) + second_s;
    int end_sec = (hour_e * 60 * 60) + (minute_e * 60) + second_e;


    
    // getline(cin, day); // this code helps to take input with whitespace
    //cin >> day;
    //cout << day;

    return 0;
}