#include<bits/stdc++.h>
#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
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

string sumof(string number1, string number2) {
    if (number1.length() > number2.length())
        swap(number1, number2);
        
    string sum = "";
    int len1 = number1.length();
    int len2 = number2.length();
    int digitDiff = len2 - len1;
    int carry = 0;
    int intSum;
    for (int i=len1-1; i>=0; i--) {
        intSum = ((number1[i]-'0') + (number2[i+digitDiff]- '0') + carry);
        sum.push_back(intSum%10 + '0');
        carry = intSum/10;
    }
    for (int i=digitDiff-1; i>=0; i--) {
        intSum = ((number2[i]-'0')+carry);
        sum.push_back(intSum%10 + '0');
        carry = intSum/10;
    }
    if (carry)
        sum.push_back(carry+'0');
    reverse(sum.begin(), sum.end());
    return sum;
}
int main() {
   
   //string n1 = "259058909701382810435441643464652692076";
   //string n2 = "75306452065121335498200664981021461578";
   string n1, n2;
   char x;
   cin >> n1 >> x >> n2;
   cout << sumof(n1, n2) << endl;
   

   return 0;
}