
#include<bits/stdc++.h>
using namespace std;
// Print the sum of all odd numbers between X and Y.

int main()
{

    int count;
    cin>>count;

    for (int i = 0; i < count; i++)
    {
        
        int a,b;
        cin>>a>>b;
        int sum=0;

        if(a<b){
            for(int i=a+1; i<b; i++){
                if(i%2!=0){
                    sum=sum+i;
                }
            }
        }else{
            for(int i=b+1; i<a; i++){
                if(i%2!=0){
                    sum=sum+i;
                }
            }
        }
        
        
        cout<<sum<<endl;

    }
    

    return 0;
}