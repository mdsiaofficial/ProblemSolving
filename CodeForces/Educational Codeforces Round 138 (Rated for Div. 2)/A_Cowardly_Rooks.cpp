#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int c;
    cin>>c;

    int n, m;

    int x,y;

    for(int i=0; i<c; i++){

        cin>>n>>m;
        cin>>x>>y;

        if(m<n){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}

