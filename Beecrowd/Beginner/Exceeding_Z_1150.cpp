#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,z,c=1,n=0;
    cin>>x>>z;

    while(z<=x){
        cin>>z;
    }
    for(int i=x; i<z; i++){
        n=n+i;
        if(n>z) break;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
