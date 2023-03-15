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

int test(int t){
    cin>>t;
    return t;
}
int main(int argc, char *argv[])
{
    int row;
    int col;
    int x[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>x[i][j];
            if(x[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    //cout<<row<<el<<col<<el;
    cout<<abs(row-2)+abs(col-2)<<el;
	return 0;
}
