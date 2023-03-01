#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    n=n-2;
    int first=0;
    int second=1;
    int next=0;
    cout<<first<<" "<<second;
    while(n--)
    {
        next=first+second;
        cout<<" "<<next;
        first=second;
        second=next;
    }
    cout<<endl;
    

    return 0;
}
