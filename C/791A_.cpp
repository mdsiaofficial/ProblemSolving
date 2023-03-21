#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c;
    if(a>b){
        cout<<"0"<<endl;
    }else{
        while (a<=b)
        {
            a=a*3;
            b=b*2;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;    
}