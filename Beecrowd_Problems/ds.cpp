#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    int no1;
    int no2;
    int no3;
    int sto;
    int hi;
    int lo;

    cin>>no1>>no2>>no3;

    if (no1>no2) {   
      sto=no1;    
      lo=no2;   
    }else{
      sto=no2;  
      lo=no1;  
    } 

   if (sto>no3) { 
      hi=sto;    
      if(lo>no3){         
         sto=lo;                
         lo=no3;
      }else {
         sto=no3;      
      }         
    }else{
        hi=no3; 
    }
   cout<<sto<<endl<<hi<<endl<<lo<<endl;
    return 0;
}