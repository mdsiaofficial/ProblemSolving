#include <iostream>
#include <vector>
#include <map>
 // solved
using namespace std;
 

 // GCD rules -1 
long long gcd(long long a, long long b){
    if(a>b){
        swap(a,b);
    }

    long long remainder;
    while(true){
        remainder = b%a;
        b=a;
        a=remainder;
        if(remainder==0) return b;
    }
}

// GCD Rules -2  --- Time limit exceeded on test 8
long long gcd_2(long long a, long long b){
    long long gcd;
    for(int i=1; i<=a&&i<=b; i++){
        if(a%i==0 && b%i==0) gcd = i;
    }

    return gcd;
}


int main() {

    int n;
    cin>>n;
    int c=0;
    for(long long i=1; i<=n; i++){
        if(gcd(n,i)==1) c++;
    }
    cout<<c<<endl;
    
    return 0;
}