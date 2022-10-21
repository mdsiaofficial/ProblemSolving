#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    long long int in=0, out=0;

    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>=10 && arr[i]<=20){
            in++;
        }else{
            out++;
        }
    
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}