#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <numeric>

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
    bool isHappy(int n) {
        // if(n==1) return true;
        unsigned long long temp = n;

        while (temp!=1 && temp!=4)
        {

            unsigned long long sum = 0;

            while (temp > 0) {
                sum += (temp % 10) * (temp % 10);
                temp = (temp / 10);
                cout << "sum: " << sum << endl;
            }

            temp = sum;

        }
        
        return (temp == 1);
    }


    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), greater<int>());

        int size = 0;
        int c = 0;
        for (int i = 0; i < capacity.size(); i++) {
            size += capacity[i];
            if (sum > size) {
                // size += capacity[i];
                c++;
                // cout << c << " ";
            }
            else {
                c++;
                break;
            }
        }

        return c;
    }


};



int main() {
    // Solution s;


    int t;cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string h = s.substr(0, 2);
        string m = s.substr(3, 5);

        // cout << h;
        // cout << m;
        int hh = stoi(h);
        int mm = stoi(m);
        string a = " AM";
        string p = " PM";

        string out = "";
        string h_out = "";
        string m_out = "";
        if (hh == 0) {
            if (mm < 10){
                // cout << "0" << hh - 12 << ":" << mm << p;
                // out =h + ":" + "0" + m + p;
                m_out = "0" + to_string(mm);
            }
            else {
                m_out = m;
            }
            h_out = "12";
            out = h_out + ":" + m_out + a;
            
        }else if (hh < 12) {
            // cout << h << ":" << m << a;
            out = s + a;
        }else if (hh > 12) {
            
            if (hh - 12 < 10) {
                // cout << "0" << hh - 12 << ":" << mm << p;
                // out = "0" + h + ":" + m + p;
                h_out = "0" + to_string(hh - 12);
            }
            else {
                h_out = to_string(hh - 12);
            }
            
            if (mm < 10) {
                // cout << "0" << hh - 12 << ":" << mm << p;
                // out =h + ":" + "0" + m + p;
                m_out = "0" + to_string(mm);
            }else {
                m_out = m;
            }

            out = h_out + ":" + m_out + p;
        }
        else if(hh==12) {
            // cout << hh << ":" << mm << p;
            h_out = h;
            if (mm < 10){
                // cout << "0" << hh - 12 << ":" << mm << p;
                // out =h + ":" + "0" + m + p;
                m_out = "0" + to_string(mm);
            }
            else {
                m_out = m;
            }

            out = h_out + ":" + m_out + p;
        }

        cout << out;
        cout << endl;
        // cout << hh;
        
    }

    // string s = "";
    // string a = "am";
    // string p = "pm";
    // s = a + p;
    // cout << s;
    return 0;
} 