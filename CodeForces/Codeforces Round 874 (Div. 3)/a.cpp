#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int mergeMelodies(string s) {
    unordered_map<string, int> melodies;
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        string melody = s.substr(i, 2);
        if (melodies.count(melody) == 0) {
            melodies[melody] = 1;
            count++;
        }
    }
    return count;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int minMelodies = mergeMelodies(s);
        cout << minMelodies << endl;
    }

    return 0;
}
