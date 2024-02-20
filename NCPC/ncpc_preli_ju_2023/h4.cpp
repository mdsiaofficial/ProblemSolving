#include <iostream>
#include <string>
#include <vector>
#include <sstream> // Added for std::istringstream
#include <iomanip>
#include <ctime>
using namespace std;

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int getDaysInMonth(int month, int year) {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

int getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int h = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    return (h + 5) % 7;
}

void printCalendar(int day, int month, int year, std::string dayName) {
    std::vector<std::string> daysOfWeek = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int startDay = getDayOfWeek(1, month, year);
    int daysInMonth = getDaysInMonth(month, year);

    std::cout << "|---------------------------|" << std::endl;
    std::cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << std::endl;
    std::cout << "|---------------------------|" << std::endl;

    int dayCount = 1;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == 0 && j < startDay) {
                std::cout << "| - ";
            } else if (dayCount > daysInMonth) {
                std::cout << "| - ";
            } else {
                std::cout << "| " << dayCount;
                dayCount++;
            }
        }
        std::cout << "|" << std::endl;
        std::cout << "---------------------------" << std::endl;
    }
}

// This function prints a calendar for a given year and month
void print_calendar(int year, int month) {
    // Create a tm structure with the given year and month
    tm time_in = { 0, 0, 0, 1, month - 1, year - 1900 };

    // Get the corresponding time_t value
    time_t time_temp = mktime(&time_in);

    // Get the tm structure for the first day of the month
    const tm * time_out = localtime(&time_temp);

    // Print the weekday names
    cout << "|---------------------------|\n";
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
    cout << "|---------------------------|\n";

    // Get the weekday of the first day
    int day = time_out->tm_wday;

    // Print some spaces to align the first day
    for (int i = 0; i < day; i++) {
        cout << "| - ";
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
        cout << "|" << setw(3) << i << "";
        // Start a new line after Saturday
        if (++day > 6) {
            day = 0;
            cout << "|\n";
            cout << "|---------------------------|\n"; // Add this line
        }
    }

    // If the last week is not complete, fill it with " - "
    while (day++ < 6) {
        cout << "| - ";
    }

    // If the first week is not complete, fill it with " - "
    if (day != 0) {
        for (int i = 30; i <= days_in_month; i++) {
            cout << "|" << setw(3) << i << "";
            if (++day > 6) {
                day = 0;
                cout << "|\n";
                cout << "|---------------------------|\n"; // Add this line
            }
        }
    }

    // Print a new line at the end
    cout << "|\n";
}


int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::string date;
        std::cin >> date;
        std::vector<std::string> parts = split(date, '/');
        int day = std::stoi(parts[0]);
        int month = std::stoi(parts[1]);
        int year = std::stoi(parts[2]);
        std::string dayName;
        std::cin >> dayName;
        // printCalendar(day, month, year, dayName);
        print_calendar(year, month);
        cout << "|---------------------------|\n";
        std::cout << std::endl;
    }
    return 0;
}


/* 
Sample Input:
2
20/02/2024 Tue
01/01/2000 Sat

Sample Expected Output:
|---------------------------|
|Sun|Mon|Tue|Wed|Thu|Fri|Sat|
|---------------------------|
| - | - | - | - |  1|  2|  3|
|---------------------------|
|  4|  5|  6|  7|  8|  9| 10|
|---------------------------|
| 11| 12| 13| 14| 15| 16| 17|
|---------------------------|
| 18| 19| 20| 21| 22| 23| 24|
|---------------------------|
| 25| 26| 27| 28| 29| - | - |
|---------------------------|

|---------------------------|
|Sun|Mon|Tue|Wed|Thu|Fri|Sat|
|---------------------------|
| 30| 31| - | - | - | - |  1|
|---------------------------|
|  2|  3|  4|  5|  6|  7|  8|
|---------------------------|
|  9| 10| 11| 12| 13| 14| 15|
|---------------------------|
| 16| 17| 18| 19| 20| 21| 22|
|---------------------------|
| 23| 24| 25| 26| 27| 28| 29|
|---------------------------|


Output getting:
|---------------------------|
|Sun|Mon|Tue|Wed|Thu|Fri|Sat|
|---------------------------|
| - | - | - | - |  1|  2|  3|
|  4|  5|  6|  7|  8|  9| 10|
| 11| 12| 13| 14| 15| 16| 17|
| 18| 19| 20| 21| 22| 23| 24|
| 25| 26| 27| 28| 29| - |
|---------------------------|

01/01/2000 Sat
|---------------------------|
|Sun|Mon|Tue|Wed|Thu|Fri|Sat|
|---------------------------|
| - | - | - | - | - | - |  1|
|  2|  3|  4|  5|  6|  7|  8|
|  9| 10| 11| 12| 13| 14| 15|
| 16| 17| 18| 19| 20| 21| 22|
| 23| 24| 25| 26| 27| 28| 29|
| 30| 31| - | - | - | - |
|---------------------------|

 */