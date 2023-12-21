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


class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        int Area() {
            return length * breadth;
        }
};

int main() {
    Rectangle rect1(4, 5);
    Rectangle rect2(5, 8);

    cout << "Area of rectangle with sides 4 and 5: " << rect1.Area() << endl;
    cout << "Area of rectangle with sides 5 and 8: " << rect2.Area() << endl;

    return 0;
}
