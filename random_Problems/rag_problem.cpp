#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main() {

	string str;
    cin>>str;

    ll eng_start = -1;
    ll eng_end = -1;

    for(int i=0; i<= str.length(); i++){
        if((str[i]>='a' && str[i]<= 'z') || (str[i]>='A' && str[i]<= 'Z')){
            if(eng_start ==-1) eng_start = i;

            eng_end = i+1;
        }
    }

    if (eng_start != -1) {
        cout << str.substr(0, eng_start) << endl;
        cout << str.substr(eng_start, eng_end - eng_start) << endl;
        cout << str.substr(eng_end) << endl;
    } else {
        // No English letters found
        cout << str << endl;
    }
	return 0;
 
}

/* 

x = input()
eng_start = None
eng_tast = None
for i in range(len(x)):
    if('a' <= x[i] <= 'z') or ('A' <= x[i] <= 'Z')
    if eng_start is None:
        eng_start = i;

    eng_tast = i+1

print (x [0 : eng_start-1])
print (x [eng_start : eng_last])
print (x [eng_last::]) */