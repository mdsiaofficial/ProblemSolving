#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        long long n1,n2;
        cin>>n1>>n2;
        long long sum=n1+n2;
        cout<<"Case #"<<i<<": "<<fixed<<sum<<endl;
    }
    


    return 0;
}