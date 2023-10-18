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
            for(int j=i; j<n; j++){
                bool isB=true;

                for(int k=i+1; k<=j; k++){
                    if(a[k]!=a[i]){
                        isB=false;
                        break;
                    }
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
