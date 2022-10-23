
#include <bits/stdc++.h>
using namespace std;
// Print the sum of all odd numbers between X and Y.

int main()
{
    int a, b;

    while (1)
    {
        cin >> a >> b;

        if(a==b){
            cout << "Crescente" << endl;
            break;
        }

        cout << "Decrescente" << endl;
    }
    
    return 0;
}
