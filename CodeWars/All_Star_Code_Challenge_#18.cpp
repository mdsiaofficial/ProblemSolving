#include <string>
#include <iostream>
using namespace std;
unsigned int strCount(std::string word, char letter){
    //your code here
    int c=0;
    for(int i=0; i<word.length(); i++){
        if(word[i] == letter){
        c++;
        }
    }
    return c;
}