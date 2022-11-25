#include<bits/stdc++.h>
#define ll long long


using namespace std;
 
 // uns
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
                if(x%2==0){
                    sum += x;
                    x++;

                }
            }
            cout << sum << endl;
        }
    }
    

    return 0;
}