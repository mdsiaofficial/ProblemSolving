#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;

    cin>>n;

/*     for(int i=0; i<n+(n-1); i++){
        for(int i=0; i<n+(n-1); i++){
            cout<<n<<" ";
        }
        cout<<endl<<n<<" ";
        for(int i=0; i<n+(n-1); i++){
            cout<<n<<" ";
        }
    }
    
 */

/*     for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

 */

    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
