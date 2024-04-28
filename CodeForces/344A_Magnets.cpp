#include <bits/stdc++.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
#define el endl
using namespace std;

int main () {
    double n,n1,n2=0,count=0;
    cin >> n;
    for(int i =0; i <n ; i++){
        cin >> n1;
        if (n1 != n2){
            count++;
            n2=n1;
        }
        
    }
    cout << count;
    return 0;
}