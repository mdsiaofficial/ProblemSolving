#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{

    int n;
    cin>>n;
    n=n/365
    int year = n;
    int month = n/30;
    int day = n%30;

    cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;

    return 0;
}