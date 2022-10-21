#include<bits/stdc++.h>

using namespace std;

int main(){

    int sum=0;
    int div=1;
    for(int i=1; i<=39; i=i+2){
        sum = sum + (i/div);

        div = div*2;

    }
    cout<<sum<<endl;
    
    return 0;

}
