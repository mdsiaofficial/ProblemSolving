#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string n;
        cin >> n;
        int x = n.length();
        set<char> r = {'0', '1', '2', '3', '4', '5', '6'};

        int overs = x / 6;
        int ball = x % 6;

        int rr = 0;
        int w = 0;
        for (char c : n) {
            if (r.find(c) != r.end()) {
                rr += (c - '0');
            } else {
                w++;
            }
        }

        string over = (overs >= 1 && ball > 0) ? "Overs" : "Over";
        string run = (rr > 1) ? "Runs" : "Run";
        string wicket = (w > 1) ? "Wickets." : "Wicket.";

        cout << overs << "." << ball << " " << over << " " << rr << " " << run << " " << w << " " << wicket << endl;
    }

    return 0;
}
