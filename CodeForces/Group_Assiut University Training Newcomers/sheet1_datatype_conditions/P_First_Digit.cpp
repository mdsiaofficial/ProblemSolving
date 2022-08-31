#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    long int x;

    long int find;

    cin>>x;

    while(x!=0){
        find=x%10;
        x=x/10;
    }
    //cout<<find;

    if(find)
    return 0;
}