#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    char x;
    cin>>x;

    if(x>='A' && x<='Z'){
        char ch = tolower(x);
        cout<<ch<<endl;
    }else if(x>='a' && x<='z'){

        char ch= toupper(x);
        cout<<ch<<endl;
    }
    return 0;
}