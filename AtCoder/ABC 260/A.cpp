#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string ss;
    cin>>ss;
    char st[3];
    for (int i = 0; i < count; i++)
    {   
        char st[i]=ss[i];
        cout<<st[i]<<endl<<ss[i];
        /* code */
    }

    int c;

    if(st[0]!=st[1] && st[0]!=st[2]){
        cout<<st[0]<<endl;
    }else if(st[1]!=st[0] && st[0]!=st[2]){
        cout<<st[1]<<endl;
    }else if(st[2]!=st[1] && st[2]!=st[0]){
        cout<<st[2]<<endl;
    }else if(st[0]!= st[1] && st[0]!=st[2] && st[2]!=st[1]){
        cout<<st[0]<<endl;
    }else if(st[0] == st[1] && st[0]==st[2] && st[2]==st[1]){
        cout<<"-1"<<endl;
    }
    
    return 0;

}