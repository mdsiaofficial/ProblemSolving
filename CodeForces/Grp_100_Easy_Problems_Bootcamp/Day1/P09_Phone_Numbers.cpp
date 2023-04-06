#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    if(s.length()>=11){
        for(int i=0; i<s.length(); i++){
            if(s[i]=='8'){
                c++;
            }
        }
        if(c>0){
            cout<<(s.length()/11)<<endl;
        }else{
            cout<<0<<endl;
        }
    }else{
        cout<<0<<endl;
    }
    return 0;
}