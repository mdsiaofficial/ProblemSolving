#include<bits/stdc++.h>
using namespace std;
// solved
int main(){
    int i = 4;
    double d = 4.0;
    //char s[] = "HackerRank ";
    string s="HackerRank ";
    
    
    int ii;
    double dd;
    cin>>ii>>dd;
    //char ss[];
    string ss;
    
    // this two line is very important to get line input with white space
    cin.ignore();
    getline(cin,ss);
    //
    cout<<i+ii<<endl<<fixed<<setprecision(1)<<d+dd<<endl;
    cout<<s<<ss<<endl;
    //printf("%s%s",s,ss);
    //<<s<<ss<<endl;
    return 0;
}