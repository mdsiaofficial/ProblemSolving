#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int a, b;
    int sum=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    
    return 0;
}
