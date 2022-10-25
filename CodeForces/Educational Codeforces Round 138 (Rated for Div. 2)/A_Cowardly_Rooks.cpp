#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int c;
    cin>>c;

    int n, m;
    cin>>n>>m;
    int x1, y1, x2, y2;
    

    for(int i=0; i<c; i++){

        
        cin >> x1 >> y1;
        cin >> x2 >> y2;


        if(m<n){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}

