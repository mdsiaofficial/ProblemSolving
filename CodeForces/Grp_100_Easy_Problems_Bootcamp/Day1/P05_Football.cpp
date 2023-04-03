#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {

    string n;
    cin>>n;

    int c0=0;
    int c1=0;
    int c=0;

    for(int i=0; i<n.length(); i++){    

        if(n[i]=='0'){
            c0++;
            c1=0;
        }else{
            c1++;
            c0=0;
        }
        
        if(c1==7 || c0==7){
            c=1;
        }
    }
    if(c==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}