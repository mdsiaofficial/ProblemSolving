#include <iostream>
#include <string>

using namespace std;

bool is_valid_date(int day, int month, int year) {
    if (month < 1 || month > 12) return false;
    if (day < 1) return false;
    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return day <= 29;
        } else {
            return day <= 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return day <= 30;
    } else {
        return day <= 31;
    }
}

string identify_date_format(string date_str) {
    int day = stoi(date_str.substr(0, 2));
    int month = stoi(date_str.substr(3, 2));
    int year = stoi(date_str.substr(6, 4));
    bool is_dd_mm_yyyy = is_valid_date(day, month, year);
    swap(day, month);
    bool is_mm_dd_yyyy = is_valid_date(day, month, year);
    if (is_dd_mm_yyyy && is_mm_dd_yyyy) {
        return "BOTH";
    } else if (is_dd_mm_yyyy) {
        return "DD/MM/YYYY";
    } else {
        return "MM/DD/YYYY";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string date_str;
        cin >> date_str;
        string format = identify_date_format(date_str);
        cout << format << endl;
    }
    return 0;
}
