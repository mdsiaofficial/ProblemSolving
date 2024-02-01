#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        float n, x;
        cin>>n>>x;
        if(x>= (n/2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
	return 0;
}
