#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {   
        int n;
        cin >> n;
        int arr[n];
        int count;
        for(int j=0; i<n; j++){

            cin>>arr[j];

            if(arr[j] < 0){
                count++;
            }
        }
        cout << count << endl;
        

    }
    

}