#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MOD 1000000007
using ll = long long;
using dbl = long double;
//#define int ll  // Comment out if overflow sus & change int main to signed main 

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<vii> vvii;
#define ff first
#define ss second
#define pb push_back
#define all(s) s.begin(), s.end()
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()
#define tc int t; cin>>t; while(t--)
#define file_read(x,y) freopen(x, "r", stdin); \
                    freopen(y, "w", stdout);
#define fightFight cin.tie(0) -> sync_with_stdio(0)

struct DinicMatching {
    struct Edge {
        int to, rev;
        ll c, oc;
        int id;
        ll flow() { return max(oc - c, 0LL); } // if you need flows
        ll rflow() { return max(c - oc, 0LL); } // if you need reverse flows
    };

    int n, m;
    ll memoized_maxflow;
    bool match_called = false, maxflow_called = false, reachable_called = false;
    vi lvl, ptr, q, reachable, lmatch, rmatch;
    vector<vector<Edge>> adj;
    int ldex(int v, bool rev = false) { return (!rev) ? v + 1 : v - 1; }
    int rdex(int v, bool rev = false) { return (!rev) ? n + v + 1 : v - n - 1; }
    bool isLeft(int v) { return (v >= 1 and v <= n); }
    bool isRight(int v) { return (v > n and v <= n+m); }

    void __addEdge(int a, int b, ll c, int id = 0, ll rcap = 0) {
        adj[a].push_back({b, sz(adj[b]), c, c, id});
        adj[b].push_back({a, sz(adj[a]) - 1, rcap, rcap, id});
    }
    void addEdge(int l, int r, int id = 1){
        __addEdge(ldex(l), rdex(r), 1, id);
    }
    ll dfs(int v, int t, ll f) {
        if (v == t || !f) return f;
        for (int& i = ptr[v]; i < sz(adj[v]); i++) {
            Edge& e = adj[v][i];
            if (lvl[e.to] == lvl[v] + 1)
                if (ll p = dfs(e.to, t, min(f, e.c))) {
                    e.c -= p, adj[e.to][e.rev].c += p;
                    return p;
                }
        }
        return 0;
    }
    ll max_matching() {
        if(maxflow_called) return memoized_maxflow;
        maxflow_called = true;
        int s = 0, t = n + m + 1;
        ll flow = 0; q[0] = s;
        rep(L,0,31) do { // 'int L=30' maybe faster for random data
            lvl = ptr = vi(sz(q));
            int qi = 0, qe = lvl[s] = 1;
            while (qi < qe && !lvl[t]) {
                int v = q[qi++];
                for (Edge e : adj[v])
                    if (!lvl[e.to] && e.c >> (30 - L))
                        q[qe++] = e.to, lvl[e.to] = lvl[v] + 1;
            }
            while (ll p = dfs(s, t, LLONG_MAX)) flow += p;
        } while (lvl[t]);
        return memoized_maxflow = flow;
    }
    void match() {
        if(match_called) return;
        match_called = true;
        lmatch.assign(n, -1), rmatch.assign(m, -1);
        for(int u=0; u < n; u++){
            for(auto &e : adj[ldex(u)]){
                if(!e.id or e.flow() == 0) continue;
                int v = rdex(e.to, true);
                lmatch[u] = v;
                rmatch[v] = u;
            }
        }
    }
    void reachable_dfs(int v){
        if(reachable[v]) return;
        reachable[v] = true;
        for(auto &e : adj[v]){
            if(!e.id) continue;
            if(isLeft(v) and e.flow() == 0) reachable_dfs(e.to);
            if(isRight(v) and e.rflow() == 1) reachable_dfs(e.to);
        }
    }
    void solve_reachable(){
        if(reachable_called) return;
        reachable_called = true;
        max_matching(); match();
        reachable.assign(n + m + 2, 0);
        for(int v=0; v < n; v++)
            if(lmatch[v] == -1) reachable_dfs(ldex(v));
    }
    vi vertex_cover(){
        solve_reachable();
        vi vcover; vcover.reserve(memoized_maxflow);
        for(int v=0; v < n; v++)
            if(!reachable[ldex(v)]) vcover.pb(ldex(v));
        for(int v=0; v < m; v++)
            if(reachable[rdex(v)]) vcover.pb(rdex(v));
        return vcover;
    }
    vi maximum_independent_set(){
        solve_reachable();
        vi MIS; MIS.reserve(n + m - memoized_maxflow);
        for(int v=0; v < n; v++)
            if(reachable[ldex(v)]) MIS.pb(ldex(v));
        for(int v=0; v < m; v++)
            if(!reachable[rdex(v)]) MIS.pb(rdex(v));
        return MIS;
    }
    bool leftOfMinCut(int a) { return lvl[a] != 0; }

    DinicMatching(int N) : lvl(N), ptr(N), q(N), adj(N) {}
    DinicMatching(int _n, int _m) : DinicMatching(_n + _m + 2) {
        n = _n, m = _m;
        int source = 0, sink = n + m + 1;
        for(int v=0; v < n; v++) __addEdge(source, ldex(v), 1);
        for(int v=0; v < m; v++) __addEdge(rdex(v), sink, 1);
    }
};

void solve(){

    int n1, n2, m, q; cin >> n1 >> n2 >> m >> q;
    DinicMatching net(n1, n2);

    map<pii, int> edges;
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v; u--, v--;
        net.addEdge(u, v, i+1);
        edges[{u, v}] = i + 1;
    }

    ll maxflow = net.max_matching();
    ll esum = 0;
    net.match();
    auto &lmatch = net.lmatch, &rmatch = net.rmatch;
    set<int> match_edges;
    for(int v=0; v < n1; v++)
        if(lmatch[v] != -1) match_edges.insert(edges[{v, lmatch[v]}]);
    for(auto &e : match_edges) esum += e;

    vi vcover = net.vertex_cover();
    for(int i=0; i < q; i++){
        int type; cin >> type;
        if(type == 1){
            cout << 1 << '\n';
            int rem = vcover.back(); vcover.pop_back();
            int matchv;
            if(net.isLeft(rem)) {
                rem = net.ldex(rem, true);
                cout << rem + 1 << '\n';
                matchv = lmatch[rem];
            }
            else {
                rem = net.rdex(rem, true);
                cout << -(rem + 1) << '\n';
                matchv = rmatch[rem];
                swap(rem, matchv);
            }
            int erem = edges[{rem, matchv}];
            esum -= erem;
            match_edges.erase(erem);
            maxflow--;
            cout << esum << endl;
        }
        else{
            cout << maxflow << '\n';
            for(auto &e : match_edges) cout << e << " ";
            cout << endl;
        }
    }
}

signed main(){
    fightFight;
    solve();   
}