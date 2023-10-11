#include<bits/stdc++.h>

#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){
    int year;
    cin>>year;

    
    while(1){
        year++;
        int one,two,three,four;
        one = year % 10;
        int temp = year / 10;

        two = temp % 10;
        temp = temp / 10;
        three = temp % 10;
        temp = temp / 10;
        four = temp % 10;
        if(one!=two && one!=three && one!=four && two!=three && two!=four && three!=four) break;
    }
    cout<<year<<endl;
    
    return 0;
}
