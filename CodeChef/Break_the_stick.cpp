#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        // soln 1:
        // If x is odd, we can always find a solution 
        // (for example we may split the stick to 1-length sticks)
        // If x is even, n should also be an even number. 
        // (we always face at least one even length stick no matter how we split)
        
        // n - x = y
        // even-even= even, satisfied
        // odd-even= odd, not satisfied
        // even-odd= odd, satisfied
        // odd-odd= even= odd+odd, satisfied
        /*
        if(x%2==0){
            if(n%2==0) cout<<"YES\n";
            else cout<<"NO\n";
        }else{
            cout<<"YES"<<endl;
        }
        */

        // soln 2:
        //cout << (x&1||!(n&1)?"YES":"NO") << endl;



        // soln 3:
        int y=n-x;
        if(x%2==0 && y%2==0){
            cout<<"YES\n";
        }else if(x%2!=0 && y%2!=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        
    }

    return 0;
}


