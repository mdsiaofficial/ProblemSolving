#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    float n1,n2,n3,n4;

    cin>>n1>>n2>>n3>>n4;

    float average= (n1+n2+n3+n4)/4;

    cout<<fixed<<setprecision(1)<<average<<endl;



    return 0;
}