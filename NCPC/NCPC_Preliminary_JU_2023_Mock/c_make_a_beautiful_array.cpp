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
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int max_sum = a[0];
        int current_sum = a[0];
        int moves = 0;
        for (int j = 1; j < n; j++) {
            if (current_sum < 0) {
                current_sum = a[j];
                moves++;
            } else {
                current_sum += a[j];
            }
            max_sum = max(max_sum, current_sum);
        }
        cout << "Case " << i << ": " << max_sum << " " << moves << endl;
    }
    return 0;
}
       

