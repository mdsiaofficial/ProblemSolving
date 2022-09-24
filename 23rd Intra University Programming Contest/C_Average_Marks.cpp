#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0;
    int c=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        c++;
        sum=sum+a;
    }

    int avrg= sum/c;
    cout<<avrg<<endl;
    return 0;
}

