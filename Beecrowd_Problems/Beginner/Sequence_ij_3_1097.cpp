//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 9; i = i + 2)
    {   
        
        int j=7;
        if(i==1){
            
            j = 7;
        }else if(i==3){
            j = j+2;

        }else if(i==5){
            
            j = j+2+2;
        }else if(i==7){
            j = j+2+2+2;

        }else if(i==9){
            
            j = j+2+2+2+2;
        }
        
        for (int c = 1; c <= 3; c++)
        {
            
            cout << "I=" << i << " J=" << j << endl;
            j = j - 1;


            
        }


        
    }

    return 0;
}
