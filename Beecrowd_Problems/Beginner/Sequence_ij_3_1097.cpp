//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int te = 1;
    for (int i = 1; i <= 9; i = i + 2)
    {
        int j = 7;
        for (int c = 1; c <= 3; c++)
        {
            //int j=7;
            cout << "I=" << i << " J=" << j << endl;
            j = j - 1;
            //te = te + 1;
        }
        //  te++;
        if (te == 4)
        {
            j = j + 2;
            te = 1;
        }
    }

    return 0;
}
