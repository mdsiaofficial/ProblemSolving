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


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

class Solution {
public:
    int romanToInt(string s) {
        // Initialize a map to store the values of each Roman numeral
        map<char, int> roman;
        // Insert the values of each Roman numeral into the map
        roman.insert({'I', 1});
        roman.insert({'V', 5});
        roman.insert({'X', 10});
        roman.insert({'L', 50});
        roman.insert({'C', 100});
        roman.insert({'D', 500});
        roman.insert({'M', 1000});

        // Initialize the result to 0
        int result = 0;
        // Iterate through the input string
        for (int i = 0; i < s.size(); i++) {
            // If the current numeral is less than the next numeral, subtract its value from the result
            if (i < s.size() - 1 && roman[s[i]] < roman[s[i+1]]) {
                result -= roman[s[i]];
            } 
            // Otherwise, add its value to the result
            else {
                result += roman[s[i]];
            }
        }
        // Return the final result
        return result;
    }

    string intToRoman(int num) {
        // Define the values and symbols for each Roman numeral
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        // Initialize the result string
        string result = "";
        // Iterate through the values
        for (int i = 0; i < values.size(); i++) {
            // While the current value is less than or equal to the input number
            while (num >= values[i]) {
                // Subtract the current value from the input number
                num -= values[i];
                // Append the corresponding symbol to the result string
                result += symbols[i];
            }
        }
        // Return the result string
        return result;
    }
};


int main(){
    fastio;

    Solution s;
    cout<<s.romanToInt("MCMXCIV");
    cout<<nl;
    cout<<s.intToRoman(10);

    return 0;
}
