#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int m,n,k;
        cin>>m>>n>>k;
        if((n*k)<=m)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
