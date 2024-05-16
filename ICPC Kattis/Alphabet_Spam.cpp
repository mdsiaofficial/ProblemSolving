#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
// #define nl cout<<"\n"
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define io std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


int main() {
    string input;
    getline(cin, input);

    // Initialize counters
    int whitespace_count = 0, lowercase_count = 0, uppercase_count = 0, symbol_count = 0;

    // Count each character type
    for (char c : input) {
        if (c == '_') {
            whitespace_count++;
        } else if (islower(c)) {
            lowercase_count++;
        } else if (isupper(c)) {
            uppercase_count++;
        } else {
            symbol_count++;
        }
    }

    int total_count = input.length();

    // Calculate ratios
    double whitespace_ratio = static_cast<double>(whitespace_count) / total_count;
    double lowercase_ratio = static_cast<double>(lowercase_count) / total_count;
    double uppercase_ratio = static_cast<double>(uppercase_count) / total_count;
    double symbol_ratio = static_cast<double>(symbol_count) / total_count;

    // Set precision for output
    cout << fixed << setprecision(6);

    // Output the ratios
    cout << whitespace_ratio << endl;
    cout << lowercase_ratio << endl;
    cout << uppercase_ratio << endl;
    cout << symbol_ratio << endl;

    return 0;
}
