#include<bits/stdc++.h>
using namespace std;
//ICPC Dhaka Regional Preliminary Contest, 2021
//Hosted by: BUBT
int main(){

    long int count;

    cin>>count;

    for (int i = 1; i <= count; i++)
    {
        /* code */
        long int a,b,c;
        cin>>a>>b>>c;
        /*if(a==b && b==c && a==c){
            cout<<"Case "<<i<<": Peaceful."<<endl;
        }else if(a<b && a<c && b<c){
             
        }*/

        if((a+b+c)%3==0){
            cout<<"Case "<<i<<": Peaceful"<<endl;
        }else{
            cout<<"Case "<<i<<": Fight"<<endl;
        }
    }
    
    return 0;
}