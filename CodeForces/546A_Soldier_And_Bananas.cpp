#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define ell cout<<endl
#define el endl
#define ll long long
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

void solve(){
   
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // Declare and read the input variables
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost of w bananas
    int total_cost = k * w * (w + 1) / 2;

    // Output the answer
    if (total_cost > n) {
        cout << total_cost - n << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}