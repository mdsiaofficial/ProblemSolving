#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// solved
int main() {
    string t;
    //cin>>t;
    //gets(t);
    getline (cin, t);
    cout<<t.size();
    cout<<t.length();
    if(t.size()<=140) cout<<"TWEET"<<endl;
    else cout<<"MUTE"<<endl;
    return 0;
}
