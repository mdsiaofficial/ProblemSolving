#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int>binary;
    int n=59;
    while(n){
        binary.push_back(n%2);
        n=n/2;
    }
    reverse(binary.begin(), binary.end());
    for(auto i:binary){
        cout<<i;
    }
    return 0;
}
