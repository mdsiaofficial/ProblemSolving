#include <iostream>
using namespace std;

string  name = "Ashiq";

int first(){
    int a=1;
    int b = second(4,8);
    a=a+b;
    return a;
}

int second(int x, int y){
    int c=6;
    return c;
}

int main() {
    
    int r = first();

    cout<< r <<endl; // output in the console
    return 0;
}
