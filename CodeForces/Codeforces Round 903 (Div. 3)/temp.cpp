#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int operations = 0;
        string current_x = x;

        while (current_x.length() < m) {
            current_x += current_x;
            operations++;
        }

        if (current_x.find(s) != string::npos) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
