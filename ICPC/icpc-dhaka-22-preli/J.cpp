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
        int cpyarr[n];
        for(int p=0; p<k; p++){
            int sum1=0;
            for(int y=0; y<n; y++){
                sum1=sum1+time[y];
                arr[y]=sum1;
            }

            for(int q=1; q<n; q++){
                sum=arr[0];
                if(arr[q-1]>arr[q]) 
                    //sum=arr[q]+1;
                    arr[q]=sum1+1;
                    for(int e=0; e<n; e++){
                        cpyarr[e]= arr[e];
                        //cout<<"Case "<<i<<": "<<cpyarr[e]<<endl;
                    }

                sum=arr[q]+sum;
                cout<<arr[q]<<" ";
            }
        }
        //cout<<"Case "<<i<<": "<<arr[n-1]<<endl;
        for(int e=0; e<n; e++){
            cpyarr[e]= arr[e];
            //cout<<"Case "<<i<<": "<<cpyarr[e]<<endl;

        }
        //cout<<"Case "<<i<<": "<<sum1<<endl;
    }
    return 0;
}