#include<bits/stdc++.h>

using namespace std;

int main()
{
    for(float i=0; i<=2.2; i=i+0.2){
        for (float j = 1; j <= 3; j++)
        {
            
            //j=j+i;
            for(float z=1; z<=3; z++){
                j=j+i;
                cout<<"I="<<i<<" J="<<j<<endl;
            }
            
        }
        
    }

    return 0;
}
