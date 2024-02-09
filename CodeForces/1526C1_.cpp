#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define nl endl
#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

void solve(void)
{

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; // the number of potions
    cin >> n;
    long long health = 0; // the total health
    int count = 0; // the number of potions drunk
    priority_queue<int, vector<int>, greater<int>> pq; // the priority queue to store the potions
    for (int i = 0; i < n; i++) {
        int a; // the health value of the current potion
        cin >> a;
        health += a; // add the potion to the total health
        pq.push(a); // push the potion to the queue
        count++; // increment the count
        if (health < 0) { // if the health becomes negative
            health -= pq.top(); // pop out the potion with the smallest health value
            pq.pop();
            count--; // decrement the count
        }
    }
    cout << count << endl; // output the answer
    return 0;
}


