#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int u=0;
    int l=0;
    for(int i=0; i<n; i++)
    {
        if(isupper(s[i])) u++;
        else l++;
    }
    
    if(u>l){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }else {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
    return 0;    
}