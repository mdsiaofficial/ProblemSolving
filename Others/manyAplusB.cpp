#include<bits/stdc++.h>    // Include the c++ standard library for I/O operations
using  namespace  std;    // Specify namespace std
#define sq(x)   (x)*(x)    // define sq(x) as x^2
#define PI      acos(-1.0)    // define PI
#define all(x) x.begin(),x.end()    // define all(x) as x.begin(),x.end()
#define nl      '\n'    // define nl as new line character
typedef long long int ll;    // define ll as long long integer
typedef unsigned long long int  llu;    // define llu as unsigned long long integer
#define N 101    // define N as 101
ll ar[N][N],I[N][N];    // define ar and I as two dimensional arrays of size [N][N]
ll mod = 1000000007;    // Initialize mod with value 1000000007
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
				ll x = (A[i][k]*B[k][j]);
				R[i][j]=(R[i][j]+x);
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
