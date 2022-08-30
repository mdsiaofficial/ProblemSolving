#include<bits/stdc++.h>
#define int long long
using namespace std;
int t, n, m, s1, s2, d;
void solve() {
	cin >> n >> m >> s1 >> s2 >> d;
	int d1 = s1 - 1, d2 = s2 - 1, d3 = n - s1, d4 = m - s2;
	if(s1 + s2 - 2 <= d || n + m - s1 - s2 <= d) {
		cout << -1 << endl;
		return;
	}
	if((d1 > d && d4 > d) || (d2 > d && d3 > d)) {
		cout<< n + m - 2<<endl;
	}
	else cout<< -1 <<endl;
}
signed main() {
	cin >> t;
	while(t --) {
		solve();
	}
	return 0;


//https://zhuanlan.zhihu.com/p/558711274?utm_id=0
}
