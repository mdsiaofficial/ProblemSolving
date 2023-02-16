#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main() {
    vector<int>binary;
    int n=2;
    while(n){
        binary.push_back(n%2);
        n=n/2;
    }
    for(auto i:binary){
        cout<<i;
    }
    cout<<endl;
    return 0;
}