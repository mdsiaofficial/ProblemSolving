#include <iostream>
using namespace std;

int main() {

    long long x;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    for(int i=x-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
