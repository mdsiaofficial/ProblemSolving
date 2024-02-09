#include <iostream>
#include <string>

using namespace std;

string game_theory(string s) {
    // Count the occurrences of lowercase and uppercase letters.
    int lowercase_count = 0;
    int uppercase_count = 0;
    for (char c : s) {
        if (islower(c)) {
        lowercase_count++;
        } else {
        uppercase_count++;
        }
    }

    // If the number of lowercase and uppercase letters is the same, Alice wins.
    if (lowercase_count == uppercase_count) {
        return "Alice";
    }
    // If there are more lowercase letters, Alice wins.
    else if (lowercase_count > uppercase_count) {
        return "Alice";
    }
    // If there are more uppercase letters, Bob wins.
    else {
        return "Bob";
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int l;
        cin>>l;
        string s;
        cin >> s;

        string winner = game_theory(s);
        cout << winner << endl;
    }

    return 0;
}