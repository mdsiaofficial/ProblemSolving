#include <iostream>
#include <vector>
#include <map>
 
 // mine solved
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int s[n];
        int e[n];
        for(int i=0; i<n; i++){
            cin>>s[i]>>e[i];
        }
        cout<<s[0]<<" "<<e[0]<<endl;
    }
    
    return 0;
}