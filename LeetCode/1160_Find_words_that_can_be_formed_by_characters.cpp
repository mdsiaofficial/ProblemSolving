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


    int countCharacters(vector<string>& words, string chars) {
        // creating a frequency map of all 26 characters a-z
        unordered_map<char, int>charMaps;

        for (char c : chars) {
            charMaps[c]++;
        }

        // creating frequency map of all strings in words vector
        // comparing with frequency map of charMaps

        int result = 0;

        for (string w : words) {
            // create a freq map of specific element of vector words
            unordered_map<char, int>wordMaps;
            for (char c : w) {
                wordMaps[c]++;

            }

            // compare the wordMaps with the charMaps
            bool f = true;
            // Here, we are iterating over the characters in the word and checking if the frequency of that character in the word is greater than the frequency of that character in the chars.
            // If it is, we set the flag 'f' to false and break the loop.
            for(auto &it:wordMaps){
                // If the frequency of a character in the word is greater than the frequency of that character in the chars,
                // we set the flag 'f' to false and break the loop.

                // cout<<it.first<<"-"<<it.second<<nl;

                if(charMaps[it.first] < it.second){
                    f = false;
                    break;
                }
                // update the result:

            }

            if(f) result += w.size();
        }
        return result;
    }

    

};


int main() {
    fastio;

    Solution s;


    vector<string> words;
    words.push_back("cat");
    words.push_back("bt");
    words.push_back("hat");
    words.push_back("tree");
    string chars = "atach";
    cout << s.countCharacters(words, chars);


    return 0;
}