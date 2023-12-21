#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

class Complex {
public:
    double real, imag;

    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator + (Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    Complex operator - (Complex const &obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    Complex operator * (Complex const &obj) {
        return Complex(real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real);
    }

    void print() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; 
    Complex c4 = c1 - c2; 
    Complex c5 = c1 * c2; 

    cout << "Sum is "; c3.print();
    cout << "Difference is "; c4.print();
    cout << "Product is "; c5.print();

    return 0;
}