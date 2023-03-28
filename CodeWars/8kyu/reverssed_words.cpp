#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string reverse_words(string s) {
    vector<string> words;
    string current_word = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            words.push_back(current_word);
            current_word = "";
        } else {
            current_word += s[i];
        }
    }
    
    words.push_back(current_word);
    reverse(words.begin(), words.end());
    
    string reversed_words = "";
    
    for (int i = 0; i < words.size(); i++) {
        reversed_words += words[i];
        if (i != words.size() - 1) {
            reversed_words += " ";
        }
    }
    
    return reversed_words;
}

int main() {
    string s = "Hello world!";
    cout << reverse_words(s) << endl;  // Output: "world! Hello"
    return 0;
}
