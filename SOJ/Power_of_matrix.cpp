#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl      '\n'
#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

// matrix exponantiatioin to solve this.
#define N 101
#define mod 1000000007    // define N as 101
ll ar[N][N],I[N][N];    // define ar and I as two dimensional arrays of size [N][N]

void mul(ll A[][N],ll B[][N],ll n)    // Define function mul(A,B,n)
{
    /*
    Returns the multiplication of two matrices A and B of size n.
    Parameters
    ----------
    A : ll[][]
        First matrix.
    B : ll[][]
        Second matrix.
    n : ll
        Size of the matrices.

    Returns
    -------
    None
    */
	ll i,j,k;
	ll R[n+1][n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			R[i][j]=0;
			for(k=1;k<=n;k++)
			{
				ll x = (A[i][k]*B[k][j])%mod;
				R[i][j]=(R[i][j]+x)%mod;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			A[i][j]=R[i][j];
		}
	}
}
void power(ll A[][N],ll n,ll p)    // Define function power(A,n,p)
{
    /*
    Returns the matrix A raised to the power p.
    Parameters
    ----------
    A : ll[][]
        Matrix.
    n : ll
        Size of the matrix.
    p : ll
        Power to raise the matrix to.

    Returns
    -------
    None
    */
	ll i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)I[i][j]=1;
			else I[i][j]=0;
		}
	}
	while(p)
	{
		if(p%2==1)
		{
			mul(I,A,n);
			p--;
		}
		else{
			mul(A,A,n);
			p/=2;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			A[i][j]=I[i][j];
		}
	}
}
int main()    // main function
{
    /*
    Main function to run code.
    Parameters
    ----------
    None

    Returns
    -------
    int
        Return status code.
    */
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,i,j,k;
		cin>>n>>p; // matrix size= n x n || p = power
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>ar[i][j];
			}
		}
		power(ar,n,p);
		//cout<<"print the answer"<<nl;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<nl;
		}
	}
	return 0;
}
