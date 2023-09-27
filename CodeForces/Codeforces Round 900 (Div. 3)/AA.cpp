#include <iostream>
#include <vector>
#include <map>
 
 // mine solved
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int d=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k) d=1;
        }
        if(d==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    
    return 0;
}