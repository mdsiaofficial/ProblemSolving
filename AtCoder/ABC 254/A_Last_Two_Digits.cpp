#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int temp = n%10;
    int temp2 = n/10;
    cout<<temp2%10<<temp<<endl;

    return 0;
}