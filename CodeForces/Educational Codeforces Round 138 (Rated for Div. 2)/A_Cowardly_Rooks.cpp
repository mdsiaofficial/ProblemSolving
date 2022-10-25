#include<bits/stdc++.h>
using namespace std;

int main(){
    

    long long c;
    cin>>c;

    long long n, m;
    
    long long x[m],y[m];


    //for(long long i=0; i<c; i++){
    while(c--){
        cin>>n>>m;
        
        for (long long j = 0; j < m; j++)
        {
            cin >> x[j] >> y[j];
        }
        
        if(m==n){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}

