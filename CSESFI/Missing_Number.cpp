#include <iostream>
using namespace std;

int main() {
/* 	
    long long int n;
    int t[1000];
    cin >> n;

    for (long long int i = 0; i < n-1; i++) {
        cin>>t[i];
    }

    for(long long int j=0; j<n; j++){
        cout << t[j] << " ";
    }
 */

  /*   
    int sumofnthnumber= (n*(n+1))/2;
    cout<<sumofnthnumber;
 */


    long long n;
    long long sumofn=0;
    long long sumofnum=0;
    cin>>n;
    long int num[n-1];
    for(long long i=0; i<n-1; i++){
        cin>>num[i];
        //sumofn=sumofn+i;
        //sumofnum=sumofnum+num[i];
        // cout<<num[i]<<endl;
        // cout<<sumofn<<endl;
        // cout<<sumofnum<<endl;
    }

    for(long long j=1; j<=n; j++){
        sumofn=sumofn+j;
    }
    for(long long z=0; z<n-1; z++){
        sumofnum=sumofnum+num[z];
    }

    long long miss=sumofn-sumofnum;
    cout<<miss<<endl;

/*     
    for(long int j=0; j<n; j++){
        if(num[j])
    }
 */
	return 0;
}