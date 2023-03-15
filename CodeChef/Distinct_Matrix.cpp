#include <iostream>
using namespace std;

int main() {

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        cout<<endl;
        cout<<s[i];
        for(int j=1; j<s.length(); j++){
            cout<<s[j];
        }
        cout<<endl;
    }
	return 0;
}
