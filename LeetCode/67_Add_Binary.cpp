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
        return (binaryNumber.to_string().substr(size-x-1));
    }
    string addBinary(string a, string b) {
        // unsigned long long sum = decimalNumber(a)+decimalNumber(b);
        unsigned long long sum = decimal(a)+decimal(b);
        return (binary(sum));
    }

    string add2Binary(string a, string b) {
        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        
        while (i >= 0 || j >= 0 || carry == 1) {
            carry += (i >= 0) ? a[i] - '0' : 0;
            carry += (j >= 0) ? b[j] - '0' : 0;
            result = char(carry % 2 + '0') + result;
            carry /= 2;
            i--;
            j--;
        }
        
        return result;
    }

    
    
    string addBinary__(string a, string b) {
        long long size_a = a.length()-1;
        long long size_b = b.length()-1;
        // vector<string>str;
        string str="";
        long long c=0;

        while(size_a>=0 || size_b>=0 || c > 0){
            long long total = c;
            if(size_a >= 0){
                long long yy = a[size_a]-'0';
                total+= yy;
                size_a--;

            } 

            if(size_b >= 0){
                long long yy = b[size_b]-'0';
                total += yy;
                size_b--;
            }

            long long result = total%2;
            string x = to_string(result);
            // str.push_back(x);
            str +=x;
            c = total/2;



        }
        reverse(str.begin(), str.end());

        return str;
    }

};

int main() {
    Solution soln;

    string a = "101000001001001101100100000101011110110110011011101111111111000111111111111110001111";
    string b = "1101010010111011100011111001100010101000011010111010100110101101101110101001101011011";
    // cout<<soln.addBinary__("11", "1");
    cout<<soln.addBinary__(a, b);
    // cout<<nl<<a.length();
    return 0;
}