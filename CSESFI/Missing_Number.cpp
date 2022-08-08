#include <iostream>
using namespace std;

int main() {
	
    long long int n;
    long long int t[];
    cin >> n;

    for (long long int i = 0; i < n-1; i++) {
        cin>>t[i];
    }

    for(long long int j=0; j<n; j++){
        cout << t[j] << " ";
    }
  /*   
    int sumofnthnumber= (n*(n+1))/2;
    cout<<sumofnthnumber;
 */
	return 0;
}