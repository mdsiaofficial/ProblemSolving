#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x*y<=500) && x<=8){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
	return 0;
}
