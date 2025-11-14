#include <bits/stdc++.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int tcase=1; tcase<=t; tcase++){
        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int c=0;
        for(int i=0; i<n; i++){
             bool isB=true;
            for(int j=i; j<n; j++){
                if(a[j]!=a[i]){
                    isB=false;
                }
                if(!isB){
                    c++;
                }
            }
        }
        cout<<"Case "<<tcase<<": "<<c<<endl;
    }
    return 0;
}
