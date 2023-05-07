#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int freq[26] = {}; // initialize all frequencies to zero
        for (char c : s) {
            freq[c - 'a']++; // count the frequency of each character
        }
        int codeforces[26] = {1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0}; // frequency of each character in "codeforces"
        int diff = 0;
        for (int i = 0; i < 26; i++) {
            diff += abs(freq[i] - codeforces[i]); // compute the absolute difference between the frequencies
        }
        cout << diff << endl;
    }
    return 0;
}
