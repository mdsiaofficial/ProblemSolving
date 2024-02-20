#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// This function prints a calendar for a given year and month
void print_calendar(int year, int month) {
    // Create a tm structure with the given year and month
    tm time_in = { 0, 0, 0, 1, month - 1, year - 1900 };

    // Get the corresponding time_t value
    time_t time_temp = mktime(&time_in);

    // Get the tm structure for the first day of the month
    const tm * time_out = localtime(&time_temp);

    // Print the weekday names
    cout << "|---------------------------------|\n";
    cout << "|Sun  Mon  Tue  Wed  Thu  Fri  Sat|\n";
    cout << "|---------------------------------|\n";

    // Get the weekday of the first day
    int day = time_out->tm_wday;

    // Print some spaces to align the first day
    for (int i = 0; i < day; i++) {
        cout << "     ";
    }

    // Get the number of days in the month
    int days_in_month;
    bool is_leap_year;
    switch (month) {
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            // Check for leap year
            is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            days_in_month = is_leap_year ? 29 : 28;
            break;
        default:
            days_in_month = 31;
    }

    // Print the dates
    for (int i = 1; i <= days_in_month; i++) {
        cout << setw(3) << i << "  ";
        // Start a new line after Saturday
        if (++day > 6) {
            day = 0;
            cout << "\n";
        }
    }
    // Print a new line at the end
    cout << "\n";
}

// This program prints a calendar for a given year
int main() {
    int y;
    cout << "Enter a year: ";
    cin >> y;
    if (y < 1 || y > 9999) {
        cout << "Please choose another year\n";
        return 1;
    }
    // Print the calendar for each month
    for (int i = 1; i <= 12; i++) {
        print_calendar(y, i);
    }
    return 0;
}
