#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int s=0;
        while (x--)
        {
            int y;
            cin>>y;
            s=s+y;
        }
        if(s%2==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
    }
	return 0;
}
