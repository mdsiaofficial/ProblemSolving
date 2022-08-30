include <bits/stdc++.h>
using namespace std;

vector pot;

void solve(){ int n; cin>>n; string s; cin>>s; vector ans; ans.push_back(s);

auto chk = [&](string S, string T)
{
    if (S.size() < T.size())
    {
        swap(S, T);
    }
    int n = S.size(), m = T.size();
    for (int i = 0; i + m <= n; i++)
    {
        string ss = S.substr(i, m);
        if (ss == T)
        {
            return 1;
        }
    }
    return 0;
};

auto ok = [&](string S, string T)
{
    int f = 1;
    string p = T;
    while (p.size() <= S.size())
    {
        if (p==S)
        {
            f = 0;
        }
        p += T;
    }
    return f;
};

if (s.size() >= 10)
{

    int i = 0;
    while (ans.size() < n)
    {
        string ss = pot[i];
        if (!chk(ss, s))
        {
            int k = rand() % 5;    //this is just for coin flip technique because I was not getting an AC.
            if (k == rand()%5)
                ans.emplace_back(ss);
        }
        i++;
    }

    }




    else{

        int i = 0;
        while (ans.size() < n)
        {
            string ss = pot[i];
            if (ok(ss, s))
            {
                int k = rand()%5;
                if(k==rand()%5)
                ans.emplace_back(ss);
            }
            i++;
        }
    }

    for(int i = 1; i<n; i++){
        cout<<ans[i]<<'\n';
    }
}

int main(){

ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
endif // ONLINE_JUDGE
int tt;
cin>>tt;


for (int i = 0; i < (1 << 10); i++)
{
    string t = string(10, '-');
    for (int j = 0; j < 10; j++)
    {
        if ((1 << j) & i)
        {
            t[j] = '.';
        }
    }
    pot.emplace_back(t);
    random_shuffle(pot.begin(), pot.end());
}



for(int t = 1; t<=tt; t++){
    cout<<"Case #"<<t<<": \n";
    solve();
}
}