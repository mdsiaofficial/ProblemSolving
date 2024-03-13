#include<bits/stdc++.h>
#include <stdlib.h>

// #define nl endl
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
#define nl cout<<"\n"
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

/* 

    given a string s="abcdefg"
    given a substring length k = 4;
    what does this actually mean?

    String s: The given string is “abcdefg.”
    Substring Length k: The value of k is 4. This means we want to find substrings within the string s that have a length of 4 characters.
    In other words, we’re interested in extracting all possible contiguous sequences of 4 characters from the original string “abcdefg.” These substrings could be “abcd,” “bcde,” “cdef,” and “defg.”


*/

string findSubstring(const string& s, int k) {
    const vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int cur = 0, best = 0, ans = 0;
    for (int i = 0; i < k; ++i) {
        if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
            ++cur;
        }
    }
    best = cur;

    for (int i = k; i < s.length(); ++i) {
        if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
            ++cur;
        }
        if (find(vowels.begin(), vowels.end(), s[i - k]) != vowels.end()) {
            --cur;
        }
        if (cur > best) {
            best = cur;
            ans = i - k + 1;
        }
    }

    if (best > 0) {
        return s.substr(ans, k);
    } else {
        return "Not found!";
    }
    
}

int main() {
    string s = "taberqiitefg";
    s = "qwdftr";
    // s = "azerdii";
    // s = "aeiouia";
    int k = 5;
    cout << findSubstring(s, k) << endl;  // Output: erqii
    return 0;
}



/* 

1. Vowel-Substring
Given a string of lowercase English letters and an integer of the substring length, determine the substring of that length that
contains the most vowels. Vowels are in the set {a, e, i, o, u}. If there is more than one substring with the maximum number of
vowels, return the one that starts at the lowest index. If there are no vowels in the input string, return the string 'Not
found!' without quotes.
Example I
s = 'caberqiitefg'
The substring of length k = 5 that contains the maximum number of vowels is 'erqii'with 3 vowels.
The final answer is 'erqii'.
Example 2
s = åeiouia'
All of the characters are vowels, so any substring of length 3 will have 3 vowels. The lowest index substring is at index O, 'aei'.
Function Description
Complete the function findSubstringin the editor below.
findSubstring has the following parameters:
s: a string
k: an integer
Returns:
string: a string containing the final answer
Constraints
• 1 s length(s) s 2* 105
1 s- k s length(s)

V Input Format For Custom Testing
The first line contains a string, s.
The second line contains an integer, k.
v Sample Case O
Sample Input
STDIN
azerdii
5
Fu ncti on
azerdii'
Sample Output
erdi i
Explanation
s = 'azerdii'
The possible 5 character substrings are:
'azerd'which contains 2 vowels
'zerdi'which contains 2 vowels
'erdii'which contains 3 vowels
The final answer is 'erdii'.

Sample Case 1
Sample Input
STDIN
qwdftr
2
Function
qwd f tr
Sample Output
Not found !
Explanation
The given string does not contain any vowels, so Not Found!' is returned.
 */