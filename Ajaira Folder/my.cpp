#include <iostream>
using namespace std;

ajaira_average(int n, int m){
    int avrg=(n+m)/2;
    return avrg;
}

ajaira_oddnum(){
    int n,i;
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }

    }
    
}
int main(){

    std::cout<<"H";
    std::cout<<"h2";
    int a,b;
    std::cin>>a>>b;
    std::cout<<ajaira_average(a,b)<<std::endl;
    
    cout<<ajaira_oddnum<<endl;
    return 0;
}