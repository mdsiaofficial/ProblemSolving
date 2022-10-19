#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int total=0, rabbit=0, rat=0, frog=0;
    float PerRab, PerRat, PerFrog;

    for(int i=0; i<n; i++){
        int x;
        char y;
        cin>>x>>y;

        if(y=='C'){

            rabbit = rabbit + x;
            total = total + x;

        }else if(y=='R'){

            rat = rat + x;
            total = total + x;

        }else if(y=='S'){
            frog = frog + x;
            total = total + x;
            
        }

    }

    return 0;
}
