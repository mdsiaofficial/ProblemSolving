#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    tolower(a)
    for(int i=0; i<s.length(); i++){
        if(s[i]== 'a' && s[i]== 'e' && s[i]== 'i' && s[i]== 'o' && s[i]== 'u' && s[i]== 'A' && s[i]== 'E' && s[i]== 'I' && s[i]== 'O' && s[i]== 'U' && s[i]== 'y' && s[i]== 'Y'){
            s[i]='\0';
        }else{
            s[i-1]='.';
        }
    }
    
}