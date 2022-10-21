#include <bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cin>>x;
    int c=1;
    for(int i=x; c<=6; i++){
        if(i%2!=0){
            cout<<i<<endl;
            c++;
        }
        
    }
    return 0;
}