#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        float x,y,z;
        cin>>x>>y>>z;

        float avrg = ((x*2)+(y*3)+(z*5))/(2+3+5);
        cout<<fixed<<setprecision(1)<<avrg<<endl;

    }
    
    return 0;
}
