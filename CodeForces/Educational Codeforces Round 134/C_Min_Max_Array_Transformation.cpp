/*
void solve()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n ; i ++ ) cin >> a[i];
	for(int i = 1; i <= n ; i ++ ) cin >> b[i];
	int idx = n;
	for(int i = n ; i >= 1 ; i -- )
	{
		int t = lower_bound(b + 1, b + n + 1, a[i]) - b;
		ans[i][0] = b[t] - a[i];
		ans[i][1] = b[idx] - a[i];
		if(t == i) idx = i - 1;
	}
	for(int i = 1 ; i <= n ; i ++ ) cout << ans[i][0] << " ";
	cout << endl;
	for(int i = 1 ; i <= n ; i ++ ) cout << ans[i][1] << " ";
	cout << endl;
}
*/
#include <bits/stdc++.h>

#define int long long
#define endl '\n'
using namespace std;
const int N = 2e5+100;
int a[N];
int b[N];
int maxd[N],mind[N];
int vis[N];
int dsu[N];
int tfind(int x)
{
    
    if(dsu[x]==x)
        return x;
    return dsu[x]=tfind(dsu[x]);
}
void tmerge(int x,int y)
{
    
    x=tfind(x),y=tfind(y);
    dsu[y]=x;
}
signed main()
{
    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int t;
    for(cin>>t;t;t--)
    {
    
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
    
            cin>>a[i];
            dsu[i]=i;
        }
        for(int i=1;i<=n;i++)
        {
    
            cin>>b[i];
        }
        for(int i=n;i>=1;i--)
        {
    
            int pos=lower_bound(b+1,b+n+1,a[i])-b;
            mind[i]=b[pos]-a[i];
        }
        for(int i=1;i<=n-1;i++)
        {
    
            if(b[i]>=a[i+1])
            {
    
                int x=tfind(i),y=tfind(i+1);
                dsu[x]=y;
            }
        }
        for(int i=1;i<=n;i++)
        {
    
            maxd[i]=b[tfind(i)]-a[i];
        }
        for(int i=1;i<=n;i++)
            cout<<mind[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++)
            cout<<maxd[i]<<" ";
        cout<<endl;
    }
    return 0;

//https://chowdera.com/2022/241/202208291658308633.html

}
