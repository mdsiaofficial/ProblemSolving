#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    long long sumofn=0;
    long long sumofnum=0;
    cin>>n;
    long int num[n-1];
    for(long long i=0; i<n-1; i++){
        cin>>num[i];
        sumofnum=sumofnum+num[i];
    }
    for(long long j=1; j<=n; j++){
        sumofn=sumofn+j;
    }
    long long miss=sumofn-sumofnum;
    cout<<miss<<endl;
    
	return 0;
}