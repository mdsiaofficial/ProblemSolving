#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

void find_max(int ans[])
{
    int max=ans[0];
    int index=0;
    for(int j=1;j<10;j++)
    {
        if(max<ans[j])
        {
             max=ans[j];
             index=j;
        }
    }
    cout<<index<<endl;
}
int main(){
    string a;
    string b="0123456789";
    int ans[12];
    cin>>a;
    for(int i=0;i<10;i++)
        ans[i]=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==b[j])
            {
                ans[j]+=1;
            }
        }
    }
    find_max(ans);

    return 0;
}