#include<bits/stdc++.h> // ei library add korle ar kisu add kora lage nah 
//#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    

    int n;
    
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
