#include <bits/stdc++.h>
#define fi first    
#define se second    
#define endl '\n'
#define ios ios::sync_with_stdio(false); cin.tie(0), cout.tie(0)
typedef long long LL;
using namespace std;
const int N = 2e6 + 10,M = N*2;

int ne[N],pre[N],last;
char s[N],t[N];

void add(char x)
{
    int j = last;
    while (j && s[ne[j] + 1] != x) j = pre[j];
    s[++last] = x, j = ne[j] + 1;
    if (last == 1) ne[1] = pre[1] = 0;
    else if (s[j] == x) {
        ne[last] = j;
        if (s[ne[j] + 1] == s[j + 1]) pre[last] = pre[j];
        else pre[last] = j;
    }
    else ne[last] = pre[last] = 0;
}

void solve() 
{
    cin>>t;int len = strlen(t);
    // cout<<t<<endl;
    for(int i=0;i<len;i++) add(t[i]);
    int q;cin>>q;
    while(q--)
    {
        cin>>t;
        len = strlen(t);
        for(int i=0;i<len;i++) add(t[i]),cout<<ne[last]<<' ';
        cout<<"\n";
        last-=len;
    }
}
 
int main() 
{
    ios;
    int T=1;
    // cin>>T;
 
    while(T -- ) {
        solve();
    }
 
    return 0;
}