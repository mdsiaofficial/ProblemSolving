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

    private:
        string first;
        string last;

    public:
        void setName(string f, string l){
            this->first = f;
            this->last = l;
        }

        string getName(){
            return (first + " " + last);
        }

        void printFullName(){
            cout<<first<<" "<<last<<endl;
        }
};

int main() {

    // string firstName = "Shoriful";
    // string lastName = "Ashiq";

    Pereson p1;

    // p1.first = "Shoriful";
    // p1.last = "Ashiq";
    p1.setName("Shoriful", "Ashiq");

    p1.printFullName();
    cout<<p1.getName()<<endl;


    /* 
        class - describes the structure
        object - a specific example of that structure (instance)
        instance - name for object
        instantiating - creating the object from a class
        data members - class variables
        methods - functions

        abstraction - a concept where you make something easy by hiding the complicated stuff

        encapsulation - granting access to private data only through controlled public interface

        inheritance - we can create derived classes that inherit properties from there parent class

        polymorphism - we can create multiple different objects as their base object type
     */

    Pereson p2;
    // p2.first = "Anika";
    // p2.last = "Jannat";
    p2.printFullName();

    return 0;
}
