#include<bits/stdc++.h>
using namespace std;

int main(){
    

    long long c;
    cin>>c;

    long long n, m;
    
    


    //for(long long i=0; i<c; i++){
    while(c--){
        cin>>n>>m;
        long long x,y;
        for (long long j = 0; j < m; j++)
        {
            cin >> x >> y;
        }
        
        if(m==n){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}

