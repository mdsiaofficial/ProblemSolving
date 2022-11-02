#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
 
int main()
{

    int t;
    cin >> t;
    
    for (int i = 0; i < t;i++){
        int box;
        int shelves, books, boxholds;
        cin >> shelves >> books >> boxholds;

        while (books<boxholds)
        {
            int temp = books / boxholds;
            books = books % boxholds;
            box = temp;
        }
        cout << box << endl;
    }
    return 0;
}