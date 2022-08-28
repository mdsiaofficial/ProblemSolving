#include <bits/stdc++.h>
#define fi first    
#define se second    
#define endl '\n'
#define ios ios::sync_with_stdio(false); cin.tie(0), cout.tie(0)
using namespace std;
const int N = 1e5 + 10,M = N*2;
   
void solve() 
{
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<vector<int>> bb(1),aa(1);
    for(int i=0;i<n;i++) bb[0].push_back(b[i]),aa[0].push_back(a[i]);
    int ans = 0;
    for(int i=29;i>=0;i--)
    {
        bool f = 1;
        for(int j=0;j<bb.size();j++)//首先看这一位是否能完成匹配
        {
            int cnt[2] = {0};
            for(auto x:bb[j]) cnt[x>>i&1]++;
            for(auto x:aa[j]) cnt[(x>>i&1)^1]--;
            if(cnt[0]||cnt[1]) 
            {
                f = 0;
                break;
            }
        }
        if(!f) continue;//若不能完成匹配，则对分组无影响，则直接继续。
        ans|=1<<i;
        vector<vector<int>> nb,na;//将新的分组求出来
        for(int j=0;j<bb.size();j++)
        {
            vector<int> v1[2],v2[2];//对于当前组，将其按照当前位拆分为更细的1,0组
            for(auto x:bb[j]) v1[x>>i&1].push_back(x);
            for(auto x:aa[j]) v2[(x>>i&1)^1].push_back(x);//a中当前位是1，则需要存到相反的0组，是0的存到1组。因为匹配的时候是与相反的位匹配。
            for(int k=0;k<2;k++)
                if(v1[k].size())
                {
                    nb.push_back(v1[k]);
                    na.push_back(v2[k]);
                }
        }
        bb.swap(nb),aa.swap(na);
    }
    cout<<ans<<'\n';
}
 
int main() 
{
    ios;
    int T=1;
    cin>>T;
 
    while(T -- ) {
        solve();
    }
 
    return 0;
}