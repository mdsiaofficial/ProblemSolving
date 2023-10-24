#include <iostream>
#include <string>
using namespace std;

// A function to count the number of operations needed to turn off all bulbs
// with a given interval length
int countOperations(string bulbs, int n, int interval)
{
    int count = 0; // initialize the count to zero
    for (int i = 0; i < n; i++)
    { // loop through the string
        if (bulbs[i] == '1')
        {            // if the bulb at index i is on
            count++; // increment the count
            for (int j = i; j < min(n, i + interval); j++)
            {                   // loop through the interval
                bulbs[j] = '0'; // turn off the bulb at index j
            }
        }
    }
    return count; // return the count
}

// A function to find the minimum interval length that can turn off all bulbs
// in at most k operations
int minInterval(string bulbs, int n, int k)
{
    int low = 1;  // initialize the lower bound to one
    int high = n; // initialize the upper bound to n
    int ans = -1; // initialize the answer to -1 (not found)
    while (low <= high)
    {                                             // while the lower bound is less than or equal to the upper bound
        int mid = (low + high) / 2;               // find the middle point
        int ops = countOperations(bulbs, n, mid); // count the number of operations needed with this interval length
        if (ops <= k)
        {                   // if the number of operations is less than or equal to k
            ans = mid;      // update the answer to this interval length
            high = mid - 1; // narrow down the search space to the left half
        }
        else
        {                  // if the number of operations is greater than k
            low = mid + 1; // narrow down the search space to the right half
        }
    }
    return ans; // return the answer
}

// The main function
int main()
{
    int n, k;                                 // declare two integers for the size of string and the maximum number of operations
    cin >> n >> k;                            // read them from standard input
    string bulbs;                             // declare a string for the state of bulbs
    cin >> bulbs;                             // read it from standard input
    cout << minInterval(bulbs, n, k) << endl; // print the minimum interval length to standard output
    return 0;                                 // return zero to indicate successful termination
}
