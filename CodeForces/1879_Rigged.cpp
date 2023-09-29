#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 //unsolved
int main() {
    
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int x, y, ps, pe, w;
        for(int i=0; i<n; i++){
            cin>>x>>y;
            if(i==0){
                ps=x; pe=y; w=x;
            }else{
                if(x>=ps && y>=pe) w=-1;
            }
        }

        cout<<w<<endl;
    }
    
    return 0;
}