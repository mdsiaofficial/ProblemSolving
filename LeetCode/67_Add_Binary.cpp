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

class Solution {
public:
    unsigned long long decimal(string b){
        // using bitset
        const unsigned long long size = 64; 
        bitset <size> decimalNumber(b); 
        return decimalNumber.to_ullong();
    }
    string binary(unsigned long long n){
        if (n == 0) return "0"; // Handle the case when n is 0
        const unsigned long long size = 64;
        unsigned long long x = (log2(n));
        bitset <size> binaryNumber(n); 
        return (binaryNumber.to_string().substr(64-x-1));
    }
    string addBinary(string a, string b) {
        // unsigned long long sum = decimalNumber(a)+decimalNumber(b);
        unsigned long long sum = decimal(a)+decimal(b);
        return (binary(sum));
    }   
};

int main() {
    Solution soln;

    string a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    string b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    // cout<<soln.addBinary("11", "1");
    cout<<soln.addBinary(a, b);

    return 0;
}