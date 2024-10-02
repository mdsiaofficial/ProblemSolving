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
    if(n <= 1) return;
    ull f=0;
    ull s=1;
    fibos.push_back(f);
    fibos.push_back(s);
    fibo_Recursion(n-2);
    ull nt=f+s;
    fibos.push_back(nt);
    f=s;
    s=nt;
}

int main()
{
    // solved
    unsigned long long t;
    cin>>t;
    while (t--)
    {
        fibos.clear();
        ull n;
        cin>>n;
        fibo(n);
        // for(int a:fibos){
        //     printf("%d ", a);
        // }
        cout<< "Fib("<<n<<") = "<<fibos[n]<<endl;

    }
    return 0;
}






