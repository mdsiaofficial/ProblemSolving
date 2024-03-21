#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int launch_hour, launch_minute, travel_hour, travel_minute;
    int blast_hour, blast_minute;

    // Take input for launch time
    // cout << "Enter launch time (hh mm): ";
    cin >> launch_hour >> launch_minute;

    // Take input for travel time
    // cout << "Enter travel time (hh mm): ";
    cin >> travel_hour >> travel_minute;

    // Calculate blast time
    blast_minute = (launch_minute + travel_minute) % 60;
    blast_hour = launch_hour + travel_hour + (launch_minute + travel_minute) / 60;
    blast_hour %= 24;

    // Print the blast time
    cout << setw(2) << setfill('0') << blast_hour << " " << setw(2) << setfill('0') << blast_minute << endl;
    // cout << "Blast time: " << setw(2) << setfill('0') << blast_hour << ":" << setw(2) << setfill('0') << blast_minute << endl;

    return 0;
}