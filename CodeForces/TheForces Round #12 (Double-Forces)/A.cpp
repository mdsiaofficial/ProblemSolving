#include <iostream>
#include <vector>
using namespace std;

vector<int> matchsticks = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // number of matchsticks required for each digit

string getSmallestNumber(int n) {
    string smallest = "";
    while (n > 0) {
        bool foundDigit = false;
        for (int i = 0; i < 10; i++) {
            if (n >= matchsticks[i]) { // we have enough matchsticks to form this digit
                n -= matchsticks[i];
                smallest += to_string(i);
                foundDigit = true;
                break;
            }
        }
        if (!foundDigit) { // we don't have enough matchsticks to form any digit
            smallest = "0";
            break;
        }
    }
    return smallest;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << getSmallestNumber(n) << endl;
    }
    return 0;
}
