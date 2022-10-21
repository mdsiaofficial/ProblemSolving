#include <bits/stdc++.h>

using namespace std;

int main(){

    char ch;

    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"Character is Upper case."<<endl;
    }else if(ch>='a' && ch<='z'){
        cout<<"Character is Lower case."<<endl;
    }else if(ch>='0' && ch<='9'){
        cout<<"Character is a number"<<endl;
    }else{
        cout<<"Special Character"<<endl;
    }
    return 0;
}