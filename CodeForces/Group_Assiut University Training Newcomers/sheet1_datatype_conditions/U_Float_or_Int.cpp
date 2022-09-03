#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
// #include <string>
// #include <stdlib.h>
#include <iomanip>
using namespace std;




/* 
// solve 1 part 2
void Number(int x)
{
    cout << "The entered number is an integer. " << endl;
}
void Number(float x)
{
    cout << "The entered number is a float. " << endl;
}

 */



int main()
{

/*  // unsolved actually, not providing Answer:
    // solve 1 part 1
    int nr;
    cout << "Please enter a number: " << endl;
    cin >> nr;
    Number(nr);
    return 0;
*/



/* 

    // solve 2
    int nr = 0; char ch;
    cout << "Please enter a number: " << endl;
    cin >> nr;
    cin.get(ch);
    if(ch=='.')
    {
        cout << "The entered number is a float. " << endl;
    }
    else
    {
         cout << "The entered number is an integer. " << endl;
    }

 */


/* 
    // solve 3
    // In C++ we have a in-built function that is typeof(). 
    // Just use this function with variable which you want 
    // to check what type of variable it is.
    string number;
    cin>>number;

    cout<< typeof(number)<<endl;
  */   



/* 

    // solve 4
    int number = 0;
    char ch;
    int fraction;
    //cout << "Please enter a number: " << endl;
    cin >>number; // decimal
    cin.get(ch); //point
    cin>>fraction;

    //this conditions finds it a float or not with a point input
    if(ch=='.'){
        cout <<"float "<<number<<" 0."<<fraction<<endl;
    }else{
        cout << "int " <<number<<endl;
    }


 */



/* 
    //solve 5 : https://qr.ae/pvgFUh
    float number;
    int decimal = number;
    float fraction = number-decimal;

    if()

 */

    // SOLVE 6
    // One effective way to convert a string object into 
    // a numeral int is to use the stoi() function.
                    // stoi() - convert string to int
                    // stof() - convert string to float
                    // stod() - convert string to double
                    // stold() - convert string to long double
    string number;
    cin>>number;
    //int de=(int)number;
    //float fr=(float)number;
    int de=stoi(number);
    float fr=stof(number);

    if(de==fr){
        cout<<"int "<<de<<endl;

    }else{
        cout<<fixed<<setprecesion(3)<<"float "<<de<<" "<<fr-de<<endl;
    }
    //cout<<number<<endl<<de<<endl<<fr<<endl;
    //if(de)
    




    return 0;
}