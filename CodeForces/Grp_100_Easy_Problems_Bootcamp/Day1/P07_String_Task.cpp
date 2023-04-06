#include<bits/stdc++.h>

using namespace std;
int main(){
    
    string s, dot;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y'){
            continue;

        }else{
            dot=dot+'.';
            
            dot=dot+s[i];
        }
    }
    cout<<dot<<endl;
    
}