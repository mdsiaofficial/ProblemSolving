#include <bits/stdc++.h>

using namespace std;

int main(){

    string firstname, lastname;
    cin>>firstname>>lastname;
    string shortcut ="";
    if(firstname.size() >= 5 && lastname.size() >= 5){
        shortcut = firstname[0]+firstname[1]+ firstname[2]+ lastname[0] + lastname[1] + lastname[2];
        
    }else{
        shortcut = firstname[0]+firstname[1]+ lastname[0] + lastname[1];
        
    }

    cout<<shortcut<<endl;
    return 0;
}