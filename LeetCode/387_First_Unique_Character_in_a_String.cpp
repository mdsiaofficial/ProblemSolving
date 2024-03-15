#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
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
// #define nl cout<<"\n"
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

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

class Solution {
public:


    int firstUniqChar(string s) {
        // The difference between unordered_map and map is that map is an ordered container, which means the elements are sorted by their key, while unordered_map is an unordered container, which means the elements are not sorted and the access time for elements is O(1) on average.

        // The order of insertion in unordered_map is not guaranteed.
        // unordered_map<char, int>charMaps;

        // for(char c:s){
        //     charMaps[c]++;
        // }

        // for(auto it:charMaps){
        //     cout<<it.first<<" - "<<it.second<<nl;
        // }


        int countChar [26] = {0};

        for(char c: s){
            countChar[c-'a']++;
        }

        for(int i=0; i<s.length(); i++){
            if(countChar[s[i]-'a'] == 1) return i;
        }

        return -1;
    }
};


int main() {
    fastio;

    Solution s;

    string ss="leetcode";
    vector<string> words;
    words.push_back("cat");
    words.push_back("bt");
    words.push_back("hat");
    words.push_back("tree");
    string chars = "atach";
    // cout << s.countCharacters(words, chars);
    cout<<s.firstUniqChar(ss);


    return 0;
}