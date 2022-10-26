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
    //int tex[m];
    int g;
    for (int i = 1; i <=c; i++){
        cin >> n >> m;
        g = 0;
        for (int j = 1; j <=m; j++)
        {
            if(m%n==0){
                g++;
            }
            
        }
        
        cout << "Case " << i << ": " << g << endl;
        
    }
        return 0;
}
