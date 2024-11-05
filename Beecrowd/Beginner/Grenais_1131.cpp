#include <bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define el cout << "\n"
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll, ll>
#define pii pair<int, int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d", &n)
#define scnll(n) scanf("%lld", &n)

#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define yes cout << "yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define no cout << "no\n"

#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))

#define fastio                             \
    std::ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                         \
    cout.tie(NULL);
using namespace std;

// * -----------------------------------------------------------
// * run program on cli
// *  -----------------------------------------------------------
//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

class Solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        ll w1 = -1, h1 = -1;
        for (int t = 0; t < n; t++)
        {
            ll a, b;
            cin >> a >> b;
            w1 = max(w1, a);
            h1 = max(h1, b);
        }
        cout << 2 * (w1 + h1) << endl;
    }
    char findKthBit(int n, int k)
    {
        string sequence = "0";

        // Generate sequence until we have enough elements or reach nth
        // iteration
        for (int i = 1; i < n && k > sequence.length(); ++i)
        {
            sequence += '1';

            // Append the inverted and reversed part of the existing sequence
            string temp = sequence;
            for (int j = temp.length() - 2; j >= 0; --j)
            {
                char invertedBit = (temp[j] == '1') ? '0' : '1';
                sequence += invertedBit;
            }
        }

        // Return the kth bit
        return sequence[k - 1];
    }
};

int main()
{

    //* For External input/output
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    // scanf("%d", &t);

    //* Test case loop
    for (ll i = 1; i <= t; i++)
    {
        // printf("Case #%d: ", i);
        // solve();
    }

    //* Single test
    // solve();

    ll gremio, inter;
    ll victory_gremio = 0;
    ll victory_inter = 0;
    ll draw = 0;
    ll matches = 0;
    ll run;
    do
    {
        cin >> inter >> gremio;
        if (inter > gremio)
        {
            victory_inter++;
        }
        else if (inter < gremio)
        {
            victory_gremio++;
        }
        else
        {
            draw++;
        }
        matches++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> run;
    } while (run == 1);

    cout << matches << " grenais" << endl;
    cout << "Inter:" << victory_inter << endl;
    cout << "Gremio:" << victory_gremio << endl;
    cout << "Empates:" << draw << endl;

    if (victory_inter > victory_gremio)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (victory_inter < victory_gremio)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else
    {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
