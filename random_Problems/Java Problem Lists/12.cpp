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


class Member {
public:
    string name;
    int age;
    string phone;
    string address;
    double salary;

    void printSalary() {
        cout << "Salary: " << salary << endl;
    }
};

class Employee : public Member {
public:
    string specialization;
};

class Manager : public Member {
public:
    string department;
};

int main() {
    Employee emp;
    emp.name = "John Doe";
    emp.age = 30;
    emp.phone = "123-456-7890";
    emp.address = "123 Main St";
    emp.salary = 50000.0;
    emp.specialization = "Software Development";

    Manager mgr;
    mgr.name = "Jane Smith";
    mgr.age = 45;
    mgr.phone = "987-654-3210";
    mgr.address = "456 Elm St";
    mgr.salary = 75000.0;
    mgr.department = "Human Resources";

    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Age: " << emp.age << endl;
    cout << "Phone: " << emp.phone << endl;
    cout << "Address: " << emp.address << endl;
    emp.printSalary();
    cout << "Specialization: " << emp.specialization << endl;

    cout << "\nManager Details:" << endl;
    cout << "Name: " << mgr.name << endl;
    cout << "Age: " << mgr.age << endl;
    cout << "Phone: " << mgr.phone << endl;
    cout << "Address: " << mgr.address << endl;
    mgr.printSalary();
    cout << "Department: " << mgr.department << endl;

    return 0;
}