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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int total = m+n;
        vector<int>res;
        // int i1=0;
        // int i2=0;
        // for(int i=0; i<total; i++){
        //     if(nums1[i]<nums2[i]){
        //         res.push_back(nums1[i]);
        //     }else{
        //         res.push_back(nums2[i]);
        //     }
        // }
        
        // for(int n: nums2){
        //     nums1.push_back(n);
        // }

        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }

        // for(int n: nums1){
        //     cout<<n<<" ";
        // }

        sort(nums1.begin(), nums1.end());
    }
};


int main() {
    fastio;

    Solution s;

    vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    int m=nums1.size();
    int n=nums2.size();
    cout<<m<<" "<<n<<nl;
    s.merge(nums1,3,nums2,3);


    return 0;
}