#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float n, m;
        cin>>n>>m;
        n=n-(n*0.10);
        if(n == m) cout<<"EITHER"<<endl;
        else if( n < m) cout<<"ONLINE"<<endl;
        else if(n > m) cout<<"DINING"<<endl;
        
	}
	return 0;
}
