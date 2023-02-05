#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

void sieve(int n){

    int prime [n];
    memset (prime, 0, sizeof(prime));
    for(int i=2; i<=sqrt(n); i++){
        if(prime[i]==0){
            for(int j=i+i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==0) cout<<i<<" ";
    }
    cout<<endl;
}

int main(int argc, char *argv[])
{
	while(1){
	    
	    int n;
	    cin>>n;
	    sieve(n);
	
	}
	return 0;
}
