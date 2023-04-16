#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to convert a word to its encoded form using the given mapping
string encode(const string& word, const vector<int>& mapping) {
    string encoded;
    for (char c : word) {
        encoded += to_string(mapping[c - 'A']);
    }
    return encoded;
}

// Function to check if there is any collision in the encoded forms of the given words
bool has_collision(const vector<string>& words, const vector<int>& mapping) {
    unordered_set<string> encoded;
    for (const string& word : words) {
        string code = encode(word, mapping);
        if (encoded.count(code) > 0) {
            return true;
        }
        encoded.insert(code);
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        vector<int> mapping(26);
        for (int i = 0; i < 26; i++) {
            cin >> mapping[i];
        }
        int N;
        cin >> N;
        vector<string> words(N);
        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }
        bool collision = has_collision(words, mapping);
        cout << "Case #" << t << ": " << (collision ? "YES" : "NO") << endl;
    }
    return 0;
}
