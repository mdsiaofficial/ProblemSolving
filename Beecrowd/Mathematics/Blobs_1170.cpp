#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++){

        float x;
        cin >> x;
        int c;
        while (x <= 1)
        {
            x = (x/2);
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
