#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))

using namespace std;

int main() {

/*
    int t;
    cin>>t;
    char ns[10]={0,1,2,3,4,5,6,7,8,9};
    int nums[10]={6,2,5,5,4,5,6,3,7,6};
    for(int i=0;i<t;i++){
        string number;
        int led=0;
        cin>>number;


        for(int j=0;j<sizeof(number);j++){
            for(int k=0; k<sizeof(nums); k++){
                //string temp1=number[j];
                //int temp = stoi(temp1);
                if (number[j] == ns[k])
                {
                    led = led + nums[k];
                }
                
            }
        }
        cout << led << endl;
    }

*/

/*
    int n, j;
    string num;
    ll leds;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> num;
        j = 0;
        leds = 0;
        while(true){
            if(num[j] == ' ') break;
            if(num[j] == '1') leds += 2;
            if(num[j] == '2') leds += 5;
            if(num[j] == '3') leds += 5;
            if(num[j] == '4') leds += 4;
            if(num[j] == '5') leds += 5;
            if(num[j] == '6') leds += 6;
            if(num[j] == '7') leds += 3;
            if(num[j] == '8') leds += 7;
            if(num[j] == '9') leds += 6;
            if(num[j] == '0') leds += 6;
            j++;
        }

        cout << leds << endl;

    }
*/

/*
    int n, j;
    char num[101];
    long long leds;
    
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%s", num);
        j = 0;
        leds = 0;
        while(true){
            if(num[j] == ' ') break;
            if(num[j] == '1') leds += 2;
            if(num[j] == '2') leds += 5;
            if(num[j] == '3') leds += 5;
            if(num[j] == '4') leds += 4;
            if(num[j] == '5') leds += 5;
            if(num[j] == '6') leds += 6;
            if(num[j] == '7') leds += 3;
            if(num[j] == '8') leds += 7;
            if(num[j] == '9') leds += 6;
            if(num[j] == '0') leds += 6;
            j++;
        }
        printf("%lld leds\n", leds);
    }

*/

    int x, tmp, size;
    string s;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        tmp = 0;
        cin >> s;
        size = s.length();
        for (int j = 0; j < size; ++j)
        {
            if(s[j] == '0' || s[j] == '9' || s[j] == '6'){
                tmp += 6;
            }else if(s[j] == '1'){
                tmp += 2;
            }else if(s[j] == '2' || s[j] == '3' || s[j] == '5'){
                tmp += 5;
            }else if(s[j] == '4'){
                tmp += 4;
            }else if(s[j] == '7'){
                tmp += 3;
            }else{
                tmp += 7;
            }
        }
        cout << tmp << " leds" << endl;
    }



    return 0;
}
