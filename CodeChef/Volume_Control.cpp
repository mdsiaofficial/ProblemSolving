#include<bits/stdc++.h>
using namespace std;
int main(){

    int count;
    cin>>count;
    int vol;
    for (int i = 0; i < count; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<b){
            vol=b-a;
        }else{
            vol=a-b;
        }
        cout<<vol<<endl;
    }
    return 0;
}