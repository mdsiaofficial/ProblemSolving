#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    long long a, b;
    cin >> a >> b;

    long long steps = b / a;
    long long rem = b % a;

    cout << steps + rem << endl;
    
    return 0;
}
