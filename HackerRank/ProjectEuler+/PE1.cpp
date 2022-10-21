#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int sum=0;
    for(int i=1; i<n; i++){
        int x;
        cin>>x;

        for (int j = 1; i<x; j++)
        {
            if(j%3==0 || j%5==0){
                sum=sum+j;

            }

        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}