#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{

    int n;
    cin>>n;
    int remain =n/365;
        
    int year = remain;
    int remain2 = n%365;
    int month = remain2/30;

    int day = remain2%30;

    cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;

    return 0;
}