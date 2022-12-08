#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int x,y;
        cin>>x>>y;
        int r = pow((3*x),2)+pow(y,2);
        int b = (2*pow(x,2))+pow((5*y),2);
        int c = -(100*x)+pow(y,3);

        if(r>b && r>c){
            //printf("Rafael ganhou\n");
            cout<<"Rafael ganhou"<<endl;
        }else if(b>r && b>c){
            //printf("Beto ganhou\n");
            cout<<"Beto ganhou"<<endl;
        }else{
            cout<<"Carlos ganhou"<<endl;
        }
    }
}