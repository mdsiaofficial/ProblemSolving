#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int x=0, y=0, z=0;
    while (n--)
    {
        int new_x,new_y,new_z;
        cin>>new_x>>new_y>>new_z;
        x=x+new_x;
        y=y+new_y;
        z=z+new_z;
    }
    if(x==0 && y==0 && z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}