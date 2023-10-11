#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// solved
int main() {
    
    long double n;
    cin>>n;
    long double sp = pow(((1 + sqrt(5))/2),n);
    long double sm = pow(((1 - sqrt(5))/2),n);
    long double fibo = (sp-sm)/sqrt(5);
    long double f = (double)fibo;
    cout<<fixed<<setprecision(0)<<f<<endl;

    return 0;
}
