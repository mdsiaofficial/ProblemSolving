#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    
    /* A palindrome is a word, number, phrase, or other sequence 
    of characters which reads the same backward as forward, 
    such as madam or racecar. */
    int n, num, digit, rev = 0;

    //cout << "Enter a positive number: ";
    cin >> num;
    n = num;

    do
    {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
    } while (num != 0);

    //cout << " The reverse of the number is: " << rev << endl;

    if (n == rev){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }

    return 0;
}


/* 

// for leetcode

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long rev{0}, origin{x};
        do {
            rev = rev * 10 + x % 10;
        } while (x /= 10);
        return rev == origin;
    }
};



 */