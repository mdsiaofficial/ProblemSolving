#include <iostream>
#include <string>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, d;
        cin >> n >> d;
        string ssss;
        cin >> ssss;
        int i = 0;
        while (i < n && ssss[i] >= d + '0') {
            i++;
        }
        if (i == n) {
            ssss += char(d + '0');
        } else {
            ssss.insert(i, 1, char(d + '0'));
        }
        cout << ssss << endl;
    }
    return 0;
}
