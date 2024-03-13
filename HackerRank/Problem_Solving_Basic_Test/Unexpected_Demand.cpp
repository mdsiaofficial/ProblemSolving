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


int filledOrders(vector<int>& order, int k) {
    // Sort the orders in ascending order
    sort(order.begin(), order.end());
    
    int count = 0;
    for (int o : order) {
        // If there are enough widgets available to fulfill the current order
        if (k >= o) {
            k -= o;  // Subtract the order quantity from the available widgets
            count++;  // Increment the count of fulfilled orders
        } else {
            break;  // Exit the loop since we can't fulfill any more orders
        }
    }
    
    return count;
}

int main() {
    
    return 0;
}



/* 

2. Unexpected Demand
A widget manufacturer is facing unexpectedly high demand for its new product,. They would like to satisfy as many
customers as possible. Given a number of widgets available and a list of customer orders, what is the maximum number of
orders the manufacturer can fulfill in full?
Function Description
Complete the function filledOrders in the editor below. The function must return a single integer denoting the maximum
possible number of fulfilled orders.
filledOrders has the following parameter(s):
order : an array of integers listing the orders
k : an integer denoting widgets available for shipment
Constraints
1<=n<=2*10^5
1<=order[i]<= 10^9
1<= k <= 10^9

Input Format For Custom Testing
The first line contains an integer, n, denoting the number of orders.
Each line i of the n subsequent lines contains an integer order[i].
Next line contains a single integer kdenoting the widgets available.
Sample Case O
Sample Input For Custom Testing
2
10
30
40
Sample Output
2
Explanation
order— [1030] with 40 widgets available. Both orders can be fulfilled.

Sample Case 1
Sample Input For Custom Testing
3
5
4
6
3
Sample Output
Explanation
order = [5,4,6] with 3 widgets available
None of the orders can be fulfilled.
 */