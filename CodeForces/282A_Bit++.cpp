#include <bits/stdc++.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
#define el endl
using namespace std;

int test(){
    int t;
    cin>>t;
    return t;
}
int main(int argc, char *argv[])
{
    int x=0;
    int n;
    cin>>n;
    while (n--)
    {
        
        string st;
        cin>>st;
        if(st[0]=='X'){
            if(st[2]=='+') x++;
            else x--;
        }else{
            if(st[0]=='+') ++x;
            else --x;
        }
    }
    cout<<x<<el;
	return 0;
}
