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

class Person{

    private:
        string first;
        string last;

    public:

        Person(string fff, string lll): first(fff), last(lll){}

        Person() = default;

        void setNameFirst(string f){
            this->first = f;
            
        }

        void setNameLast(string l){
            
            this->last = l;
        }

        void setName(string f, string l){
            this->first=f;
            this->last=l;
        }

        string getName(){
            return (first + " " + last);
        }

        void printFullName(){
            cout<<first<<" "<<last<<endl;
        }
};

class Employee: public Person{
    string department;
    public:
        Employee(string fiName, string laName, string dept):Person(fiName, laName), department(dept){}

        string getDept(string dept){
            return dept;
        }

        void setDept(string dept){
            this->department=dept;
        }

        void printInfo(){
            cout<<"First Name: "<<first<<endl;
            cout<<"Last Name: "<<last<<endl;
            // cout<<"Name: "<< getName() <<endl;
            // cout<<"Department: "<<department<<endl;
        }
};

int main() {

    // string firstName = "Shoriful";
    // string lastName = "Ashiq";

    Person p1("Shoriful", "New");

    // p1.first = "Shoriful";
    // p1.last = "Ashiq";
    // p1.setNameFirst("Shoriful");
    // p1.setNameLast("Ashiq");
    // cout<<p1.getName();
    p1.printFullName();
    // cout<<p1.getName()<<endl;


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
            Parent Class -> Child Class

        polymorphism - we can create multiple different objects as their base object type
     */

    // Person p2;
    // p2.first = "Anika";
    // p2.last = "Jannat";
    // p2.printFullName();

    // Employee e;
    // e.setName("Panku", "Abul"); // Assuming setName is not accessible or not a member of Employee
    // e.printFullName(); // Assuming printFullName is not accessible or not a member of Employee
    // Instead, we can directly set the names if the members are public in the Person class
    // or use the constructor if available and accessible in the Employee class.
    // If the members are private and there is no public method to set them, 
    // then we need to add such methods in the Employee class or in the Person class.

    

    Employee e("Panku", "Abul", "Nantu");
    e.printInfo();
    return 0;
}
