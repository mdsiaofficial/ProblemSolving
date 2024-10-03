#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main() {


    // soln 1
    string n;
    cin >> n;
    vector<int>r;
    string ne;
    vector<char>c;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] > 47 && n[i] < 57) {
            r.push_back(n[i]);
        }
    }
    sort(r.begin(), r.end());
    for (auto i : r) {
        c.push_back(char(i));
        c.push_back('+');
    }
    c.pop_back();
    for (auto i : c) {
        cout << i;
    }


    // soln 2
    // vector<int>numbers;
    // string s;cin >> s;
    // int n = s.size();
    // for (char x : s) {
    //     if (x == '+') continue;
    //     else  numbers.push_back(x - '0');
    // }
    // sort(numbers.begin(), numbers.end());
    // int i = 0;
    // for (int x : numbers) {
    //     cout << x;
    //     if (i < numbers.size() - 1) {
    //         cout << "+";
    //         i++;
    //     }
    // }
    return 0;
}