#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int j = 0, x;
    float n, avrg, index[2];
    while (1)
    {
        
    
    
        while (1)
        {

            cin >> n;
            if(n>=0.0 && n<=10.0){
                index[j] = n;
                j++;
            }else{
                cout << "nota invalida\n";

            }

            if(j>1){
                break;
            }
        
        }

        avrg = (index[0] + index[1]) / 2;
        cout << "media = " << avrg << endl;

        while (1)
        {
            cin >> x;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            if(x==1 || x==2){
                break;
            }
            if (x==1)
            {
                continue;
            }else{
                break;
            }
            
        }
    }

    
    return 0;
}