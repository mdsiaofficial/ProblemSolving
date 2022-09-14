#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        string n1,n2;
        cin>>n1>>n2;
        
        signed long long sum=stoi(n1)+stoi(n2);
        cout<<"Case #"<<i<<": "<<fixed<<sum<<endl;
    }
    


    return 0;
}