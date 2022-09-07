#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){


    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    
//check 1 
    long long sum = a*b*c*d;
    cout<<sum<<endl;
    cout<<a%100<<endl<<b%100<<endl<<c%100<<endl<<d%100<<endl<<endl;
    //solve 1: done
    if(sum<10){
        cout<<sum<<endl<<endl;
    }else{
        cout<<sum%100<<endl<<endl;
    }



 
// check 2
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long sum2 = a*b*c*d;
    cout<<sum2<<endl;
    cout<<a%100<<endl<<b%100<<endl<<c%100<<endl<<d%100<<endl<<endl;
    //solve 1: done
    if(sum<10){
        cout<<sum2<<endl;
    }else{
        long long q = sum2%100;
        if(q==0){
            cout<<"0"<<q434500145 147276606 217842775 236387740<<endl;
        }else{
            cout<<q<<endl;
        }
        
    }




    //cout<<sum%100;
    //sum=sum/10;
    //cout<<sum%10<<endl;

 
/*     
    //solve 1: done
    if(sum<10){
        cout<<sum<<endl;
    }else{
        cout<<sum%100<<endl;
    }

 */


/* 
    //solve 2: done
    //The last K digits of N is just N%10^K.

    cout<<sum%(10*10)<<endl;

 */




/* 

    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long sum = a*b*c*d;
    //cout<<sum2<<endl;
    //cout<<a%100<<endl<<b%100<<endl<<c%100<<endl<<d%100<<endl<<endl;
    //solve 1: done
    if(sum<10){
        cout<<sum<<endl;
    }else{
        cout<<sum%100<<endl;
    }
 */


    return 0;
}