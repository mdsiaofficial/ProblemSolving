#include<bits/stdc++.h>
//#include <stdio.h>
    

    // solved
using namespace std;
int main(){

    //int n=10;
    //cin>>n;

    //cout<<n<<endl<<++n<<endl<<n++<<endl;
    //printf("%d, %d, %d", n, ++n, n++);

    int n;
    cin>>n;

    int prime = 0;

    for (int i = 2; i < n; i++)
    {
        /* code */
        if(n%i==0)
        {
            prime++;
            break;
        }
    }
    if(prime==0){
        cout<<"Yes"<<endl;

    }else{
        cout<<"No"<<endl;
    }
    
/*     if(n<2){
        cout<<"No"<<endl;

    }else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                prime+=1;
            }else{
                prime+=1;
            }
        }
        
        if(prime==2 ){
            cout<<"Yes"<<endl;

        }else if(prime>2){
            cout<<"No"<<endl;
        }
    }
     */
/*     if(n%(n+1)!=0){
        cout<<"No"<<endl;
    }else if(n%n==0 && n%1==0){
        cout<<"Yes"<<endl;
    }
 */
    
    //
    return 0;
}
