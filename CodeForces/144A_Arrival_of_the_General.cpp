#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    //vector<int>s;
    int s[n], max=0, min=101, max_i, min_i;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]>max){ 
            max=s[i];
            max_i=i;
        }

        if(s[i]<min){
            min=s[i];
            min_i=i;
        }

        
    }
    //cout<<max<<endl<<max_i<<endl<<min<<endl<<min_i<<endl;

    // minimum move to move maximum to the first position
    // and minimum to the last position.
    // max_index-0 = move_number
    // min_index-last_index = move_number
    
	return 0;
}