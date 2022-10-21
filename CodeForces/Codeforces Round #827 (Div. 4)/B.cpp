#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x[n];
    set<int> a;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a.find(x[i]) != a.end())
        {
            cout << "NO" << endl;
            return;
        }
        a.insert(x[i]);
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}