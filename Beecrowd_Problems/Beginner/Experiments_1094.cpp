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

    PerRab = (float)rabbit/(float)total*100;
    PerRat = (float)rat/(float)total*100;
    PerFrog = (float)frog/(float)total*100;

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<PerRab<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<PerRat<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<PerFrog<<" %"<<endl;
    return 0;
}
