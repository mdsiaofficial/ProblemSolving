#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n=1000;
    vector<int>numbers;
    for(int j=0; j<n; j++){
        for(int i=0; i<t; i++){
            numbers.push_back(i);
        }
    }
    for(int j=0; j<n; j++){
        cout<<"N["<<j<<"] = "<<numbers[j]<<endl;
    }
    return 0;
}
