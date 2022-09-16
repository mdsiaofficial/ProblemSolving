#include<bits/stdc++.h>
using namespace std;
int main(){

    int count;

    cin>>count;

    for (int i = 1; i <= count; i++)
    {
        /* code */
        long int a,b,c;
        cin>>a>>b>>c;

        if(a==b && b==c && a==c){
            cout<<"Case "<<i<<": Peaceful."<<endl;
        }else if(a<b && a<c && b<c){
             
        }

    }
    return 0;
}