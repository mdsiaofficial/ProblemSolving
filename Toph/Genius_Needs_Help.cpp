#include<bits/stdc++.h>
using namespace std;

int main(){

    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        signed long long int n1,n2;
        cin>>n1>>n2;
        long double sum=n1+n2;
        cout<<"Case #"<<i<<": "<<sum<<endl;
    }
    


    return 0;
}