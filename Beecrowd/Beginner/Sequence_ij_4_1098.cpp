#include<bits/stdc++.h>

using namespace std;

int main()
{


    // my solution: try 1
    int j=1;
    for(float i=0; i<=2.2; i=i+0.2){
        
        for (float z = 1; z <= 3; z++)
        {
            
            //j=j+i;
            
            //cout<<"I="<<i<<" J="<<j<<endl;
        }

        cout<<"I="<<i<<" J="<<j+i<<endl;
        cout<<"I="<<i<<" J="<<j+1+i<<endl;
        cout<<"I="<<i<<" J="<<j+2+i<<endl;
    }
    


/* 
    float i = 0;
    float j = 1;
    while(i <= 2.1){
            cout << "I=" << i << " " << "J=" << j+i <<endl;
            cout << "I=" << i << " " << "J=" << j+1+i <<endl;
            cout << "I=" << i << " " << "J=" << j+2+i <<endl;
            i+= 0.2;
    }
 */
    
    
    return 0;
}
