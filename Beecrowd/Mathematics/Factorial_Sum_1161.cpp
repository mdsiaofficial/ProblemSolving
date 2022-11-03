#include <bits/stdc++.h>

using namespace std;
int main(){

    // my solution: solved
    long long a,b;
    //cin>>a>>b;
    while (cin >> a >> b)
    {
        long long factA=1;
        long long factB=1;
        for(int i=a; i>=1; i--){
            // a=a*i;
            factA*=i;
            //cout<<a<<endl;
        }
        for(
            int i=b; i>=1; i--){
            // a=a*i;
            factB*=i;
            //cout<<a<<endl;
        }
        cout<<factA+factB<<endl;
    }
    
  
    


/* 
    //solved
    long long m, n;
    long long fat[21];
    fat[0] = 1;
    
    for(int i = 1; i <= 20; i++){
        fat[i] = fat[i-1]*i;
    }
    
    while(cin >> m){
        cin >> n;
        printf("%lld\n", fat[m] + fat[n]);
    }


 */

    //long long m,n;


    return 0;
}
