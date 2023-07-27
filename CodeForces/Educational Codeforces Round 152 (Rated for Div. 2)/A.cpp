#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;
 
        int max_layers = min(b / 2, min(c, h));
        cout << max_layers * 3 << endl;
    }
 
    return 0;
}