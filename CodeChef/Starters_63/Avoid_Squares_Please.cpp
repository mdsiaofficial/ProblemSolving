#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
 
int main()
{

    int t;
    cin >> t;
    
    for (int i = 0; i < t;i++){
        int box=0;
        int shelves, books, boxholds;
        cin >> shelves >> books >> boxholds;

        while (books>boxholds)
        {
            
            books = books - boxholds;
            box++;
        }
        box++;
        cout << box*shelves << endl;
    }
    return 0;
}