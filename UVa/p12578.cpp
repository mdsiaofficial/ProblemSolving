#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;

        double l = n;
        double w = n*0.6;
        double a = l*w;


        double pi = acos(-1);
        
        double r = n/5;
        double aa = pi * r * r;
        
        cout<<fixed<<setprecision(2)<<aa<<" "<<a-aa<<endl;
    }
    return 0;
}
