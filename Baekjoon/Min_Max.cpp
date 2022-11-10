#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    //int nn[t];
    // int max = 0;
    // int min = 0;
    vector<int>nn(t);
    for (int i = 0; i < t;i++){
        
        cin >> nn[i];

    }
/*
    int max = nn[0];
    int min = nn[0];
    for (int j = 0; j < t;j++){
        if(nn[j]<min){
            min = nn[j];
        }

        if(nn[j]>max){
            max = nn[j];
        }
    }
*/
    sort(nn.begin(), nn.end());

    cout << nn[0] << " " << nn[t-1] << endl;
    return 0;
}