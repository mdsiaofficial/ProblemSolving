#include <iostream>
#include <vector>
using namespace std;



int main() {
    int arr[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6}
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n>=6){
            int x= n/6;
            int y= n%6;
            if(y!=1 && x==6){
                for (int i = 0; i < x; i++)
                {
                    cout<<0;
                }
            
            }else if(y!=1 && x==2){
                for (int i = 0; i < x; i++)
                {
                    cout<<1;
                }
            }
            
        }
    }
    return 0;
}
