#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int total=0, rabbit=0, rat=0, frog=0;
    float PerRab, PerRat, PerFrog;

    for(int i=0; i<n; i++){
        int x;
        char y;
        cin>>x>>y;

        if(y=='C'){

            rabbit = rabbit + x;
            total = total + x;

        }else if(y=='R'){

            rat = rat + x;
            total = total + x;

        }else if(y=='S'){
            frog = frog + x;
            total = total + x;

        }

    }

    PerRab = rabbit/total*100;
    PerRat = rat/total*100;
    PerFrog = frog/total*100;

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    cout<<"Percentual de coelhos: "<<PerRab<<" %"<<endl;
    cout<<"Percentual de ratos: "<<PerRat<<" %"<<endl;
    cout<<"Percentual de sapos: "<<PerFrog<<" %"<<endl;
    return 0;
}
