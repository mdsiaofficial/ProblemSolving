#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int c;
    cin>>c;

    int n, m;
    
    int x[m],y[m];


    for(int i=0; i<c; i++){

        cin>>n>>m;
        
        for (int j = 0; j < m; j++)
        {
            cin >> x[j] >> y[j];
        }
        
        if(m==n||m>n){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}

