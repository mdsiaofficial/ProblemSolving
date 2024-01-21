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

class Pereson{

    private:
        string first;
        string last;

    public:


        void setNameFirst(string f){
            this->first = f;
            
        }

        void setNameLast(string l){
            
            this->last = l;
        }

        void setName(string f, string l){
            this->first=f;
            this->last=l;
        }

        string getName(){
            return (first + " " + last);
        }

        void printFullName(){
            cout<<first<<" "<<last<<endl;
        }
};

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == t[i])
                continue;
            else if (s[i] == '1') 
                c1++;
            else 
                c2++; 
        }
        cout << max(c1, c2) << "\n";
    }

    return 0;
}
