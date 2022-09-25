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