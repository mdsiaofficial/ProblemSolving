#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int c=0;
    for(int i=2; i<n; i++){

        if(n%i==0){
             
            //cout<<"I DID NOT DO THE ASSIGNMENT."<< endl;
            

            for(int j=0; j<n; j++){
                cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
                
            }
            c++;
            break;
        }

    }

    if(c==0){
        cout<<"NO PUNISHMENT"<<endl;

    }
    //cout<<n%(n-1)<<endl;
    return 0;
}