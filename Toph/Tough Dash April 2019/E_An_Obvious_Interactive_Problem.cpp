#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i=0;
    long long j = 1000000 ;
    string s;
    long long n;
    while(i<=j)
    {
        n =  (i+j)/2;
        printf("%lld\n",n);
        cin>>s;
        if(s=="Bigger"){
            i = n +1;
        }
        else if(s=="Smaller"){
            j = n-1;
        }
        else{
            return 0;
        }
    }
}