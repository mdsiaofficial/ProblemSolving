#include<bits/stdc++.h>
#define ll long long


using namespace std;
 



int main()
{


    while (true)
    {
        int x;
        cin >> x;
        if(x==0){
            break;
        }else{
            int c = 5;
            int sum = 0;
            while (c--)
            {
                if(x%2!=0){
                    x++;
                }
                sum = sum + x;
                x = x + 2;
            }
            cout << sum << endl;
            sum = 0;
        }
    }
    

    return 0;
}