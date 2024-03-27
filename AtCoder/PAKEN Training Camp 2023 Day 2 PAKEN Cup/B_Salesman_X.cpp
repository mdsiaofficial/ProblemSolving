#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define nll cout<<endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for(int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


// Unsolved Problem
//  problem link:
// https://t.co/mHoxgyWJoC
// https://atcoder.jp/contests/pakencamp-2023-day2/tasks/pakencamp_2023_day2_b
const int MAXN = 100005;
vector<int> tree[MAXN];
bool visited[MAXN];
int totalPassages = 0;

void DFS(int node) {
    visited[node] = true;
    for (int child : tree[node]) {
        if (!visited[child]) {
            totalPassages += 2; // Add 2 for the round trip to and from the child
            DFS(child);
        }
    }
}

int main() {
    int nn, M, S, u, v;
    cin >> nn >> M >> S;

    for (int i = 1; i < nn; ++i) {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    set<int> dayVisits;
    for (int i = 0; i < M; ++i) {
        int city;
        cin >> city;
        dayVisits.insert(city);
    }

    for (int city : dayVisits) {
        fill_n(visited, MAXN, false); // Reset visited array for each day
        DFS(city); // Perform DFS for each city visited in a day
    }

    cout << totalPassages << endl; // Output the total number of road passages

    return 0;
}