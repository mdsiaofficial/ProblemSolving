#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {

    string s,m;
    cin>>s>>m;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(m.begin(), m.end(), m.begin(), ::tolower);
    cout<<s<<m<<endl;
    /* 
    int sss=0;
    int mmm=0;
    for(int i=0; i<s.length(); i++){
        int x=(int)s[i];
        int y=(int)m[i];
        sss=sss+x;
        mmm=mmm+y;
    }

    if(sss>mmm) cout<<1<<endl;
    else if (sss<mmm) cout<<-1<<endl;
    else cout<<0<<endl;
 */
    return 0;
}