#include<bits/stdc++.h>
//#include <stdio.h>

using namespace std;
int main(){

    //int n=10;
    //cin>>n;

    //cout<<n<<endl<<++n<<endl<<n++<<endl;
    //printf("%d, %d, %d", n, ++n, n++);

    int n;
    cin>>n;

    int prime = 0;
    if(n<2){
        cout<<"No"<<endl;

    }else if(n%(n+1)!=0){
        cout<<"No"<<endl;
    }else if(n%n==0 && n%1==0){
        cout<<"Yes"<<endl;
    }

    return 0;
}