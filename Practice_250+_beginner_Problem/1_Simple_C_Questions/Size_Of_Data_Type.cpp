#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    float b;
    double c;
    char d;
    string e;

    cin>>a>>b>>c>>d>>e;
    cout<<endl<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;

    cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c)<<endl<<sizeof(d)<<endl<<sizeof(e)<<endl;
    return 0;
}