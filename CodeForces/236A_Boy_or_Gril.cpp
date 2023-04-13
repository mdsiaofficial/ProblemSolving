#include<bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    sort(n.begin(), n.end());

    /* // Solve try 1: Solved
    int c=0;
    for(int i=0; i<n.length(); i++){
        if(n[i]!=n[i+1]) c++;
    }
    if(c%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    */

    // Solve try 2: 
    int p=unique(n.begin(), n.end())-n.begin(); 
    if(p%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}