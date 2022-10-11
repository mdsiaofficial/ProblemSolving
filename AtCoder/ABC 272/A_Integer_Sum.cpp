#include<bits/stdc++.h>
using namespace std;

// solved
int main(){
    int n;
    cin>>n;

    int num[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<sum<<endl;

    return 0;
}