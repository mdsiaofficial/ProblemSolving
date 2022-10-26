#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    int c;
    cin >> c;
    int n, m;
    int tex[m];
    int g;
    for (int i = 0; i < c; i++){
        cin >> n >> m;

        for (int j = 0; j < m; j++){
            g = 1;
            tex[j] = g;
            g++;
        }

        cout << "Case " << i + 1 << ": " << g << endl;
        
    }
        return 0;
}
