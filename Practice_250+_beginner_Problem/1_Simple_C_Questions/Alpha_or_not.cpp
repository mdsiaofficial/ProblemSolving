#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch>='0' && ch<='9'){
        cout<<"Character is a Number."<<endl;
    }else{
        cout<<"Character is a Alphabet."<<endl;
    }
    return 0;
}