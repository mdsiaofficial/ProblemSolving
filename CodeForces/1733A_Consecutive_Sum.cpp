/* 

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        
        int n, k;
        cin>>n>>k;

        for (int i = 0; i < k; i++)
        {
            ma[i]= 0;
        }
        long long x;

        for (int i = i; i <=n; i++)
        {
            
            cin>>x;
            int p = i%k;
            if(x> ma[p]){
                ma[p] = x;
            }
        }
        long long sum = 0;

        for (int i = 0; i <= k; i++)
        {
            
            sum = sum + ma[i];
        }
        cout<<sum<<endl;
        
        
    }
    

    return 0;
}

*/

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
long long k, n, s, t, x, a[100005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(cin >> t; t--;)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
		{
			cin >> x;
			a[i % k] = max(a[i % k], x);
		}
		s = 0;
		for(int i = 0; i < k; i++)s += a[i];
		cout << s << endl;
		fill(a, a + k, 0);
	}
}