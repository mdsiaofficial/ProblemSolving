#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int td = k*l;
    int ts = c*d;
    int count=0;
    while (td>=nl && ts>=1 && p>=np)
    {
        td = td - nl;
        ts = ts - 1;
        p = p - np;
        count++;
    }
    cout<<count/n<<endl;
    // printf("%d", count/n);
}