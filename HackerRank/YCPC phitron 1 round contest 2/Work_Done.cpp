#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        double x,d1,d2;
        cin>>x>>d1>>d2;

        double y=(x*d1)/d2;
        cout<<ceil(y)<<endl;
    }
    
    return 0;
}