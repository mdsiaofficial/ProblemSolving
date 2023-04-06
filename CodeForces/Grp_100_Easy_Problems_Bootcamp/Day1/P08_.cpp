#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Read input values
  int n, L, a;
  cin >> n >> L >> a;
  
  // Create vector of pairs to store arrival times and service times
  vector<pair<int,int>> customers(n);
  
  // Read input values for each customer
  for (int i = 0; i < n; i++) {
    cin >> customers[i].first >> customers[i].second;
  }
  
  // Sort vector by arrival times
  sort(customers.begin(), customers.end());
  
  // Initialize current time and number of breaks
  int curr_time = 0;
  int breaks = 0;
  
  // Loop through customers
  for (int i = 0; i < n; i++) {
    // If current time is less than arrival time, take breaks
    if (curr_time < customers[i].first) {
      breaks += (customers[i].first - curr_time) / a;
      curr_time = customers[i].first;
    }
    // Add service time to current time
    curr_time += customers[i].second;
  }
  
  // Check remaining time and take breaks
  if (curr_time < L) {
    breaks += (L - curr_time) / a;
  }
  
  // Print number of breaks
  cout << breaks << endl;
  
  return 0;
}