#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main() {

    string n;
    cin>>n;
    vector<int>r;
    string ne;
    vector<char>c;
    for(int i=0; i<n.length(); i++){
        if(n[i]>47 && n[i]<57){
            r.push_back(n[i]);
        }
    }
    sort(r.begin(), r.end());
    for(auto i:r){
        c.push_back(char(i));
        c.push_back('+');
    }
    c.pop_back();
    for(auto i:c){
        cout<<i;
    }
    return 0;
}