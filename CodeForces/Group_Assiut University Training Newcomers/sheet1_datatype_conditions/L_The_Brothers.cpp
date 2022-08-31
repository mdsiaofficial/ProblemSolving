#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    //string n1,n2;
    string f1, s1, f2, s2;
    //cin>>n1>>n2;
    cin>>f1>>s1;
    cin>>f2>>s2;
/*  
    we often use the getline() function to read a line of text
    getline (cin, fullName);
*/
    // pura line input nile hoibo nah...
    // cause first name last name alada match korani lagbo

    //getline(cin, n1);
    //getline(cin, n2);

    //cout<<f1<<endl<<s1<<endl<<f2<<endl<<s2;
    if(s1==s2){
        cout<<"ARE Brothers"<<endl;

    }else{
        cout<<"NOT";

    }

    return 0;
}