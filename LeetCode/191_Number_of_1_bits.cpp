#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <numeric>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0; // Initialize count of 1's to 0
        while (n != 0) { // Loop until all bits are checked
            if (n & 1 == 1) // If the least significant bit is 1
                c++; // Increment the count
            n = n >> 1; // Right shift n by 1 to check the next bit
        }
        return c; // Return the total count of 1's
    }
};

//  Bitwise AND operation: n&1

    //     n:  0101  (this is the binary representation of 5)
    //   & 1:  0001  (this is the binary representation of 1)
    //   -----------
    //         0001  (the result is 1 because the LSB of n is 1

// loop process:
// n = 1010 (binary for 10)
// n & 1 = 0000 -> count = 0
// n >> 1 = 0101
// n & 1 = 0001 -> count = 1 (increment count)
// n >> 1 = 0010
// n & 1 = 0000 -> count = 1
// n >> 1 = 0001
// n & 1 = 0001 -> count = 2 (increment count)
// n >> 1 = 0000 (end loop)

// Right shift n = n >> 1;

// Division by 2 :
//     Each bit shift to the right effectively divides the binary number by 2.
//     For example, if you have the binary number 1010 (which is 10 in decimal),
//     and you right - shift it by 1 bit,
//     it becomes 0101 (which is 5 in decimal).

// Discarding the Least Significant Bit(LSB) :
//     The rightmost bit(the LSB) is removed from the number.
//     If this bit is a 1, it’s like subtracting 1 before dividing by 2.
//     If it’s a 0, the division is straightforward.

// Before: 1010 (10 in decimal)
// After:  0101 (5 in decimal, LSB discarded)

int main() {
    Solution s;

    cout << s.hammingWeight(10);

    return 0;
}