#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    string n1,n2;
    cin>>n1>>n2;
    
/*
    we often use the getline() function to read a line of text
    getline (cin, fullName);
*/
    // pura line input nile hoibo nah...
    // cause first name last name alada match korani lagbo

    //getline(cin, n1);
    //getline(cin, n2);

    if(n1==n2){
        cout<<"ARE Brothers"<<endl;

    }else{
        cout<<"NOT";

    }

    return 0;
}