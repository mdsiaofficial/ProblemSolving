#include<bits/stdc++.h>
#define ll long long


using namespace std;
 
 
int main()
{

    int x;
    cin >> x;
    int sum = 0;
    for (int i = 1; i <= x; i++){
        if(i%2==0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}