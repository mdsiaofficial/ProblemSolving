#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string target = "codeforces";
        int n = s.size();
        int i = 0;
        while (i < n && i < target.size() && s[i] == target[i]) {
            i++;
        }
        int j = n - 1;
        int k = target.size() - 1;
        while (j >= 0 && k >= 0 && s[j] == target[k]) {
            j--;
            k--;
        }
        int diff = target.size() - (i + (n - 1 - j));
        cout << (diff > 0 ? diff : 0) << endl;
    }
    return 0;
}
