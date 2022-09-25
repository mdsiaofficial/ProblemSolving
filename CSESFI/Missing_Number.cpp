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
    long long sumofn=1;
    long long sumofnum=0;
    cin>>n;
    long int num[n-1];
    for(long long i=0; i<n-1; i++){
        cin>>num[i];
        sumofn=sumofn+i;
        sumofnum=sumofnum+num[i];
        // cout<<num[i]<<endl;
        // cout<<sumofn<<endl;
        // cout<<sumofnum<<endl;
    }
    long long miss=sumofnum-sumofn;
    cout<<miss<<endl;

/*     
    for(long int j=0; j<n; j++){
        if(num[j])
    }
 */
	return 0;
}