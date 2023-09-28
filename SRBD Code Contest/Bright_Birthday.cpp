#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Function to calculate the maximum number of colors that can be formed
int max_colors(string S) {
    // Initialize unordered_maps to store character frequencies
    unordered_map<char, int> char_freq;
    unordered_map<char, int> color_freq;

    // Initialize the count of colors that can be formed
    int max_count = 0;

    // Count character frequencies in the string S
    for (char ch : S) {
        char_freq[ch]++;
    }

    // Color definitions
    unordered_map<string, string> colors = {
        {"blue", "blue"},
        {"green", "green"},
        {"yellow", "yellow"},
        {"red", "red"},
        {"purple", "purple"},
        {"orange", "orange"},
        {"pink", "pink"},
        {"grey", "grey"},
        {"cyan", "cyan"},
        {"brown", "brown"},
        {"ash", "ash"},
        {"silver", "silver"},
        {"gold", "gold"},
        {"white", "white"},
        {"black", "black"}
    };

    // Check each color in the set C
    for (const auto& kv : colors) {
        const string& color = kv.first;
        const string& color_str = kv.second;
        color_freq.clear();

        // Count character frequencies in the color string
        for (char ch : color_str) {
            color_freq[ch]++;
        }

        bool can_form_color = true;

        // Check if there are enough characters to form the color
        for (const auto& kv : color_freq) {
            char ch = kv.first;
            int count = kv.second;
            if (char_freq.find(ch) == char_freq.end() || char_freq[ch] < count) {
                can_form_color = false;
                break;
            }
        }

        // If the color can be formed, update the character frequencies and count
        if (can_form_color) {
            for (const auto& kv : color_freq) {
                char ch = kv.first;
                int count = kv.second;
                char_freq[ch] -= count;
            }
            max_count++;
        }
    }

    return max_count;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    for (int i = 0; i < t; i++) {
        string S;
        getline(cin, S);
        int result = max_colors(S);
        cout << result << endl;
    }

    return 0;
}
