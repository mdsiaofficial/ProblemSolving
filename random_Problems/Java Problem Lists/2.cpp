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

char getGrade(int marks) {
    if (marks < 25) return 'F';
    else if (marks < 45) return 'E';
    else if (marks < 50) return 'D';
    else if (marks < 60) return 'C';
    else if (marks < 80) return 'B';
    else return 'A';
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    char grade = getGrade(marks);

    cout << "Grade: " << grade << endl;

    return 0;
}