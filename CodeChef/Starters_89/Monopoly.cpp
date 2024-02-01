#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        double p,q,r,s;
        cin>>p>>q>>r>>s;
        if(p+q+r<s || p+q+s<r || p+r+s<q || q+r+s<p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
	return 0;
}
