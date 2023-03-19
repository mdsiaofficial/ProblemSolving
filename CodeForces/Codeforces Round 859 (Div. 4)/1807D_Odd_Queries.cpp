#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        vector<int>arr;
        int sum=0;
        while (n--)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        for (auto i : arr){
            sum += i;
        }
        while (q--)
        {
            int l, r, k;
            cin>>l>>r>>k;
            int c = r - l +1;
            int odd = c-(sum%2);
            if(odd<=c/2 && k%2==0) cout<<"yes\n";
            else if(odd<=(c+1)/2 && k%2==1) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}
