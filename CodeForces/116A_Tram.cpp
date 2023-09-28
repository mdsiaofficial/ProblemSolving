#include<bits/stdc++.h>
using namespace std;
int main()
{

	// int n,t,ans=-1,d,a,b,i;
	// cin>>n;
	// cin>>a>>b;
	// t=b;

	// for(i=1; i<n; i++){
	// 	ans=max(ans,t);
	// 	cin>>a>>b;
	// 	t=t-a+b;
	// }

	// cout<<ans;


    int n;
    cin>>n;
    int arr[n];
    int x=0;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        x = x-a+b;
        arr[i]=x;
    }
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+l);

    cout<<arr[l-1];
	return 0;
}