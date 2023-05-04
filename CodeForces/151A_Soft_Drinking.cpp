#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml = k * l; // total milliliters of drink
    int slices = c * d; // total slices of lime
    int salt = p; // total grams of salt

    int toasts = min(min(ml / nl, slices), salt / np); // maximum number of toasts
    int per_friend = toasts / n; // number of toasts per friend

    cout << per_friend << endl;

    return 0;
}
