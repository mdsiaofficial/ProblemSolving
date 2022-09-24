#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    for(int i=0; i<sizeof(alpha); i++){
        if(ch==alpha[i]){
            cout<<alpha[i+1];
            //break;
        }
    }

    return 0;
}