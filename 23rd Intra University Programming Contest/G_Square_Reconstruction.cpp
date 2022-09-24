
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=0; i<t; i++){

        int a;
        cin>>a;
        int c;
        for(long long j=1; (a+j)%2!=0; j++){

            cout<<j<<endl;
            c++;
        }

    }



    return 0;
}


