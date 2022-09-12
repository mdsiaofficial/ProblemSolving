#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    /* A palindrome is a word, number, phrase, or other sequence 
    of characters which reads the same backward as forward, 
    such as madam or racecar. */

    string word;
    cin>>word;
    string mainword=word;
    reverse(word.begin(),word.end());
/*
    int n = word.length();

    string reverse= "";

    for(int i=0; i<n; i++){
        reverse+=word[i];
    }
*/
    if(word==mainword){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }



    //cout<<word<<endl;
    //cout<<mainword<<endl;

    return 0;
}