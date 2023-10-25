// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    int r=10;
    for(int i=1;i<=r;i++)
    {
        myfile <<"THIS IS ME.\n";
    }
    myfile.close();
    
    return 0;
}