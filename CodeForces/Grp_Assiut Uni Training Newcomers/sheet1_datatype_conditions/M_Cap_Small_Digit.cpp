#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    
    char x;
    cin>>x;

    //int digit
    if(x>='A' && x<='Z'){
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }else if(x>='a' && x<='z'){
        cout<<"ALPHA\nIS SMALL"<<endl;

    }else{
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}