#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int m,r,n;
        cin>>m>>r>>n;
        vector<int> x(n);
        for(int j=0;j<n;j++)
            cin>>x[j];
        int ans=0,pos=0;
        while(pos<n){
            int curr=pos;
            while(curr<n-1 and x[curr+1]-x[pos]<=2*r) curr++;
            if(curr==pos){
                if(x[curr]-r>0){
                    ans=-1;
                    break;
                }
                ans++;
                pos=curr+1;
            }
            else{
                ans++;
                pos=curr;
            }
        }
        cout<<"Case #"<<i<<": ";
        if(ans==-1)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
