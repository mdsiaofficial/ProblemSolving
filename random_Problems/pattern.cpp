/*
How to print this pattern in C language?

aA
aabD 
aaabb*G 
aaaabbb**J
aaaaabbbb***M
aaaaaabbbbb****P
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    for(int i=1; i<=6; i++){
        switch (i)
        {
        case 1:
            cout<<"aA"<<endl;
            break;
        case 2:
            cout<<"aabD"<<endl;
            break;
        case 3:
            cout<<"aaabb*G"<<endl;
            break;
        case 4:
            cout<<"aaaabbb**J"<<endl;
            break;
        case 5:
            cout<<"aaaaabbbb***M"<<endl;
            break;
        case 6:
            cout<<"aaaaaabbbbb****P"<<endl;
            break;
        
        default:
            break;
        }
    }
    return 0;
}