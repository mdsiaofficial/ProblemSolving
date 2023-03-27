#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse_words(string s) {
	// Split the string into individual words
	vector<string> words;
	string current_word = "";
	for (char c : s) {
		if (c == ' ') {
			words.push_back(current_word);
			current_word = "";
		} else {
			current_word += c;
		}
	}
	if (current_word != "") {
		words.push_back(current_word);
	}

	// Reverse the order of the words
	vector<string> reversed_words;
	for (int i = words.size() - 1; i >= 0; i--) {
		reversed_words.push_back(words[i]);
	}

	// Join the words back into a single string
	string reversed_s = "";
	for (string word : reversed_words) {
		reversed_s += word + " ";
	}
	reversed_s.pop_back(); // Remove the extra space at the end

	return reversed_s;
}

int main() {
	string s = "Hello world!";
	cout << reverse_words(s) << endl; // Outputs "world! Hello"
	return 0;
}
