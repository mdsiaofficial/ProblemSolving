#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define db double
#define pb push_back
#define pf printf
#define sf scanf
#define MIN INT_MIN
#define MAX INT_MAX
#define GCD(x, y) __gcd((x), (y))
#define LCM(x, y) ((x / GCD((x), (y))) * y)
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i <= n; i++)

inline unsigned long long getUnsignedLongLong()
{
    long long unsigned x;
    scanf("%llu", &x);
    return x;
}

inline long long getLongLong()
{
    long long x;
    scanf("%lld", &x);
    return x;
}

inline double getDouble()
{
    double x;
    scanf("%lf", &x);
    return x;
}

inline int getInt()
{
    int x;
    scanf("%d", &x);
    return x;
}
#define ULL getUnsignedLongLong()
#define LL getLongLong()
#define DB getDouble()
#define II getInt()
using namespace std;
/*---------------------------------Graph Moves--------------------------------------
int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1};                       //4 Direction
int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};   //8 direction
int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1}; //Knight Direction
-----------------------------------------------------------------------------------*/
const double PI = acos(-1.0);

int bigMod(int a, int b, int m)
{
    if (b == 0)
        return 1;
    int x = bigMod(a, b / 2, m);
    x = (x * x) % m;
    if (b % 2 == 1)
        x = (x * a) % m;
    return x;
}

void multipleTestCases();

void solve(int k)
{
    int n = II;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = II;
        mp[abs(x)] = x;
    }
    map<int, int>::iterator it;
    ll sum = 0;
    for(it = mp.begin(); it != mp.end(); it++)
        sum += it->second;
    printf("Case %d: %lld\n", k, sum);
}

int main()
{
    //freopen("input.txt", "r", stdin);
    multipleTestCases();
    //solve();
    return 0;
}

void multipleTestCases()
{
    int t;
    sf("%d", &t);
    int k = 1;
    while (t--)
        solve(k++);
}