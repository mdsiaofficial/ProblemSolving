#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    long double a,b;

    cin>>a>>b;

    //floor functione bujhi nai first e hahah
    //cout<<"floor "<<a<<" / "<<b<<" = "<<a/b<<endl;
    //cout<<"ceil "<<a<<" / "<<b<<" = "<<remainder(a,b)<<endl;
    //cout<<"round "<<a<<" / "<<b<<" = "<<a/b<<endl;


    /*
    Several programming languages have a specific built-in 
    function or operator for calculating floor division.
    floor() method is used in C++
    */

    
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<endl;
    //round er kahini da ehono bujhi nai :(
    
    
    return 0;

}