#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,k;
        cin>>n>>k;
        int time[n];
        for(int j=0; j<n; j++){
            cin>>time[j];
        }

        int sum=0;
        int arr[n];
        for(int p=0; p<k; p++){
            int sum1=time[0];
            for(int y=1; y<=n; y++){
                sum1=sum1+time[y];
                arr[y]=sum1+time[y];
/* 
                if(arr[y-1]<sum1){
                    
                } */
                cout<<sum1<<" ";
            }
/* 
            //sample
            for(int w=0; w<n; w++){
                cout<<arr[w]<<" ";
            } */
        }
        //cout<<"Case "<<i<<": "<<arr[n-1]<<endl;
        
    }
    return 0;
}