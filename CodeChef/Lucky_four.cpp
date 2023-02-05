#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long c=0;
        while(n){
            long long temp = n%10;
            n=n/10;
            if(temp==4) c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
