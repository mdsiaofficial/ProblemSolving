#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++){

        float x;
        cin >> x;
        int c=0;

        /*
        while (x <= 1)
        {
            x = (x/2);
            c++;
        }
        */

        for (int j = x; j <= 1; j=j/2){
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
