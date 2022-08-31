//#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<fstream>
using namespace std;

long double x[3],y[2];

const long double pi=acos(-1);

long double a,b;
long double d,e;

const long double eps=1e-5;

int main() {
    ifstream cin("bricks.in");
    ofstream cout("bricks.out");
    cin.sync_with_stdio(false);
    cin >> x[0] >> x[1] >> x[2] >> y[0] >> y[1];
    sort(x, x + 3);
    sort(y, y + 2);
    a = x[0], b = x[1];
    d = y[0], e = y[1];
    if (d - a > -eps && e - b > -eps) {
        cout << "YES" << endl;
        return 0;
    }
    long double dd = pi / (2 * (3e6));
    for (long double t = acos(e / b); t < asin(d / b) + dd; t += dd) {
        if (min((e - b * cos(t)) / sin(t), (d - b * sin(t)) / cos(t)) > a - eps) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}