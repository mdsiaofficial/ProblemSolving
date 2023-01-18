#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, t;
    long long p;
    
    cin >> n;
    
    for(int i = 0; i <n; i++){
        t = 0;
        cin >> p;
        
        if(p == 0){
            cout << "Not Prime" << endl;
            continue;
        }
        
        if(p == 1){
            cout << "Not Prime" << endl;
            continue;
        }
        
        if(p == 2){
            cout << "Prime" << endl;
            continue;
        }
        
        for(int i = 2; i < sqrt(p)+1; i++){
            if(p%i == 0){
                t++;
            }
            if(t == 2){
                break;
            }
        }
        
        if(t >= 1){
            cout << "Not Prime" << endl;
        }else{
            cout << "Prime" << endl;
        }
    }
    return 0;
}
