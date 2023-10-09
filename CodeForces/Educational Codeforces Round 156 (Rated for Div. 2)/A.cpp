#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n < 3) {
            cout << "NO" << endl;
        } else if (n % 3 == 0) {
            cout << "YES" << endl;
            cout << "1 2 " << n - 3 << endl;
        } else {
            cout << "YES" << endl;
            cout << "1 2 " << n - 3 << endl;
        }
    }
    
    return 0;
}
