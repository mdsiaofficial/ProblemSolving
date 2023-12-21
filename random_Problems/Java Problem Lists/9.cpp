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



class Area {
    private:
        int length;
        int breadth;
    public:
        Area(int l, int b) {
            length = l;
            breadth = b;
        }
        int returnArea() {
            return length * breadth;
        }
};

int main() {
    int length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    Area rect(length, breadth);

    cout << "Area of rectangle: " << rect.returnArea() << endl;

    return 0;
}
