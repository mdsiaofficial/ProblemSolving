#include<bits/stdc++.h>
using namespace std;
int main(){
    while (1)
    {
        long long n;
        cin>>n;
        /* 
        if(n<0) break;
        int s=1;
        for(int i=1; i<=n; i++){
            s=s+i;
        }
         */
        if(n<0) break;
        long long s=((n*(n+1))/2);
        //printf("%d\n", s+1);
        cout<<s+1<<endl;
    }
    return 0;
}