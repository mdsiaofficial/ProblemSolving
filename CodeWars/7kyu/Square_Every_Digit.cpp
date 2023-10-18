#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define ll long long
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

// Functions Here:

// My solution:
int square_digits(int num) {
    string x = to_string(num);
    string y="";
    int d=(int)log10(num);
    //int n = int(x[0])-48;
    //y=y+to_string(n);
    //cout<<y<<endl<<n<<endl<<n*n<<endl;
    for(int i=0;i<=d;i++)
    {
        int n = int(x[i])-48;
        y=y+to_string(n*n);
    }
    //int z=stoi(y, nullptr, 10);
    //cout<<z<<endl;
    return stoi(y);
}


// Another Online Solution: Ataiva.com - option 2:
int square_digits2(int num) {
  
  string str = to_string(num);
  string ans;
  for(char c: str){
    int i = c - '0';
    ans += to_string(i * i);    
  }
  return stoi(ans);
}


//Main Here: 
int main(){
    int n =3212;
    cout<<square_digits(n);
    //cout<<squareDigits(n);
    return 0;
}

