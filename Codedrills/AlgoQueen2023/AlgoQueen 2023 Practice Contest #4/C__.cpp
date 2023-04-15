#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];

    int max_earnings = 0, price = a[0];
    for(int i=0; i<n; i++) {
        int earnings = b[i] * a[i];
        if(earnings > max_earnings) {
            max_earnings = earnings;
            price = a[i];
        }
    }

    cout << price << endl;
    return 0;
}
