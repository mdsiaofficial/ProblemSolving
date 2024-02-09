#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

vector<ull>fibos;
void fibo(ull n){
    ull f=0;
    ull s=1;
    fibos.push_back(f);
    fibos.push_back(s);
    while (n--)
    {
        ull nt=f+s;
        fibos.push_back(nt);
        f=s;
        s=nt;
    }
}

void fibo_Recursion(ull n){
    ull f=0;
    ull s=1;
    fibos.push_back(f);
    fibos.push_back(s);
    while (n--)
    {
        ull nt=f+s;
        fibos.push_back(nt);
        f=s;
        s=nt;
    }
}
int main()
{
    unsigned long long t;
    cin>>t;
    while (t--)
    {
        ull n;
        cin>>n;
        fibo(n);
        cout<<fibos[n]<<endl;

    }
    return 0;
}






