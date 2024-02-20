#include <iostream>
#include <string>
using namespace std;

const int DAYS_IN_WEEK = 7;

string monthName(int month) {
    // Return the name of the given month (1-based)
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    return months[month-1];
}

int firstDayOfMonth(int month, int year) {
    // Return the day of the week (0-based) that the first day of the given month falls on
    int d = 1;
    int m = (month + 9) % 12 + 1;
    int y = year - (month <= 2);
    int k = y % 100;
    int j = y / 100;
    int h = (d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return h;
}

int daysInMonth(int month, int year) {
    // Return the number of days in the given month
    if (month == 2) {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

void displayCalendar(int month, int year) {
    // Display the calendar for the given month and year
    cout << monthName(month) << " " << year << endl;
    cout << "Su Mo Tu We Th Fr Sa" << endl;

    int firstDay = firstDayOfMonth(month, year);
    int numDays = daysInMonth(month, year);

    for (int i = 0; i < firstDay; i++) {
        cout << "   ";
    }
    for (int i = 1; i <= numDays; i++) {
        cout << i;
        if ((i + firstDay) % DAYS_IN_WEEK == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

int main() {
    int month, year;
    cout<<"Input month and year in number"<<endl;
    cin>>month>>year;
    displayCalendar(month, year);
    return 0;
}