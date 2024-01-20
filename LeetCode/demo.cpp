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

class Pereson{
    public:
    string first;
    string last;

    void printFullName(){
        cout<<first<<" "<<last<<endl;
    }
};

int main() {

    // string firstName = "Shoriful";
    // string lastName = "Ashiq";

    Pereson p1;

    p1.first = "Shoriful";
    p1.last = "Ashiq";

    p1.printFullName();


    /* 
        class - describes the structure
        object - a specific example of that structure (instance)
        instance - name for object
        instantiating - creating the object from a class
        data members - class variables
        methods - functions

     */

    Pereson p2;
    p2.first = "Anika";
    p2.last = "Jannat";
    p2.printFullName();

    return 0;
}
