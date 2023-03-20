#include <bits/stdc++.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
#define el endl
using namespace std;

int main(int argc, char *argv[])
{
/* 
    - 1 + 2 - 3 + 4 - 5 + ....+ n =
The sum of the series you’ve mentioned depends on the value of n. 
If n is odd, the sum is equal to # (n+1)/2. 
If n is even, the sum is equal to # n/2 - n. 

 */
    llu n;
    cin>>n;
    ll s1=-((n/2)-n);
    ll s2=-((n+1)/2);
    if(n%2==0) cout<<s1<<el;
    else cout<<s2<<el;
	return 0;
}
