#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int t, sum;
set<int> a;
void solve() {
	a.clear();
	sum = 0;
	string s1, s2;
	cin >> s1 >> s2;
	int x = s1[0] - 'a', y = s1[1] - 'a';
	int z = s2[0] - 'a', k = s2[1] - 'a';
	a.insert(x); a.insert(y);
	a.insert(z); a.insert(k);
	sum = a.size() - 1;
	cout<<sum <<endl;
}
int main() {
	cin >> t;
	while(t --) {
		solve();
	}
	return 0;
}
