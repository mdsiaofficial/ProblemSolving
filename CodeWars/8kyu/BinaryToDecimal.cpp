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

void to_what(){
    int i;
    int to;
    char buffer [100];
    printf ("Enter a number: ");
    scanf ("%d",&i);
    printf ("to Binary: 2\nto Decimal: 10\nto Octal: 8\nto Hexa: 16\nEnter any: ");
    scanf ("%d",&to);

    if(to==2){
        itoa (i,buffer,2);
        printf ("binary: %s\n",buffer);
    }else if(to==8){
        itoa (i,buffer,8);
        printf ("octal: %s\n",buffer);
    }else if(to==10){
        itoa (i,buffer,10);
        printf ("decimal: %s\n",buffer);
    }else if(to==16){
        itoa (i,buffer,16);
        printf ("hexadecimal: %s\n",buffer);
    }else{
        cout<<"Wrong input"<<endl;
    }
}
int main() {

    to_what();

    return 0;
}
