#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int max = 0;
    int min = 0;
    for (int i = 0; i < t;i++){
        int nn[t];
        cin >> nn[t];

    }
    int max = nn[0];
    int min = nn[0];
    for (int j = 0; i < t;i++){
        if(nn[j]<min){
            min = nn[j];
        }

        if(nn[j]>max){
            max = nn[j];
        }
    }

    cout << min << " " << max << endl;
    return 0;
}