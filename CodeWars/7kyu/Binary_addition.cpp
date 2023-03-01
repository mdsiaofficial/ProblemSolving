#include<bits/stdc++.h>
#include <cstdint>
#include <string>
#include <iostream>
using namespace std;
std::string add_binary(uint64_t a, uint64_t b) {
    vector<int>binary;
    int n=a+b;
    while(n){
        binary.push_back(n%2);

        n=n/2;
    }
    reverse(binary.begin(), binary.end());
    string sum(binary.begin(), binary.end());
    return sum;
}

int main(){
    int a=1,b=1;
    cout<<add_binary(a, b);
    return 0;
}
