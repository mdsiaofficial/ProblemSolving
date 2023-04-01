#include <iostream>
#include <cmath>

using namespace std;

long long largestPrimeFactor(long long n) {
    long long largestFactor = 1;

    // Check if the number is divisible by 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Check odd factors up to sqrt(n)
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    // If n is still greater than 2, it must be prime
    if (n > 2) {
        largestFactor = n;
    }

    return largestFactor;
}

int main() {
    // Example usage
    long long n;
    cin>>n;
    cout << largestPrimeFactor(n) << endl;

    return 0;
}
