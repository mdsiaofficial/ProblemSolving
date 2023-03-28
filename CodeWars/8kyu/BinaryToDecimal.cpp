#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdlib>
using namespace std;

// this function only works . left all are not doing work
string add_binary(unsigned long long a,unsigned long long b) {
    unsigned long long sum = a + b;
    string output;

    do {
        output = to_string(sum % 2) + output;
        sum = sum / 2;
    } while(sum > 0);

    return output;
}

int binaryToDecimal(long long n){
    int ans = 0, remainder, i = 0;

    // Until the value of n becomes 0.
    while(n != 0){
        remainder = n % 10;    
        ans += remainder * pow(2, i);
        i++; 

        // Remove the rightmost digit of n.
        n = n / 10;
    }
    
    return ans;
}

unsigned long long to_binary(unsigned long long n){
    int i;
    char buffer [33];
    printf ("Enter a number: ");
    scanf ("%d",&i);
    itoa (i,buffer,10);
    printf ("decimal: %s\n",buffer);
    itoa (i,buffer,16);
    printf ("hexadecimal: %s\n",buffer);
    itoa (i,buffer,2);
    printf ("binary: %s\n",buffer);
    return 0;
}
int main() {
    cout<<add_binary(2,3)<<endl;

    to_binary(158);

    return 0;
}
