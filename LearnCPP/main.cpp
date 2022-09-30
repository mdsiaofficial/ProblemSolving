#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string name;
    cout<<"Name?"<<endl;
	cin>>name;

	cout<<"Hey "<<name<<", you are joss."<<endl;
	

    int x; // define an integer variable named x
    int y, z; // define two integer variables, named y and z
	



    int width; // define an integer variable named width
    width = 5; // copy assignment of value 5 into variable width
    // variable width now has value 5



    int a; // no initializer
    int b = 5; // initializer after equals sign
    int c( 6 ); // initializer in parenthesis
    int d { 7 }; // initializer in braces




    int width { 5 }; // direct brace initialization of value 5 into variable width (preferred)
    int height = { 6 }; // copy brace initialization of value 6 into variable height
    int depth {}; // value initialization (see next section)


    int width {}; // zero initialization to value 0

    int x { 0 }; // explicit initialization to value 0
    std::cout << x; // we're using that zero value


    int x {}; // value initialization
    std::cin >> x; // we're immediately replacing that value





    int a = 5, b = 6; // copy initialization
    int c( 7 ), d( 8 ); // direct initialization
    int e { 9 }, f { 10 }; // brace initialization (preferred)


    int a, b = 5; // wrong (a is not initialized!)
    int a = 5, b = 5; // correct




    
    return 0;
}


