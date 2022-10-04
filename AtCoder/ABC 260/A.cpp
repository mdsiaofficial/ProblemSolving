#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string ss;
    cin>>ss;
    // char st[3];
    // st[0]=ss[0];
    // st[1]=ss[1];
    // st[2]=ss[2];
    // for (int i = 0; i < 3; i++)
    // {   
    //     char st[i]=ss[i];
    //     cout<<st[i]<<endl<<ss[i];
    //     /* code */
    // }

    //int c;

    // if(st[0]!=st[1] && st[0]!=st[2]){
    //     cout<<st[0]<<endl;
    // }else if(st[1]!=st[0] && st[0]!=st[2]){
    //     cout<<st[1]<<endl;
    // }else if(st[2]!=st[1] && st[2]!=st[0]){
    //     cout<<st[2]<<endl;
    // }else if(st[0]!= st[1] && st[0]!=st[2] && st[2]!=st[1]){
    //     cout<<st[0]<<endl;
    // }else if(st[0] == st[1] && st[0]==st[2] && st[2]==st[1]){
    //     cout<<"-1"<<endl;
    // }

    cout<<ss[0]<<endl<<ss[1]<<endl<<ss[2]<<endl<<endl;

    if(ss[0]!=ss[1] && ss[0]!=ss[2]){
        cout<<ss[0]<<endl;
    }else if(ss[1]!=ss[0] && ss[0]!=ss[2]){
        cout<<ss[1]<<endl;
    }else if(ss[2]!=ss[1] && ss[2]!=ss[0]){
        cout<<ss[2]<<endl;
    }else if(ss[0]!= ss[1] && ss[0]!=ss[2] && ss[2]!=ss[1]){
        cout<<ss[0]<<endl;
    }else if(ss[0] == ss[1] && ss[0]==ss[2] && ss[2]==ss[1]){
        cout<<"-1"<<endl;
    }
    
    return 0;

}