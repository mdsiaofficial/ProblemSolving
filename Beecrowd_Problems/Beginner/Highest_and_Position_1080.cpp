#include<bits/stdc++.h>
using namespace std;
// https://www.beecrowd.com.br/judge/en/problems/view/1080
int main(){

    // read 100 int

    int position;
    int big;
    int numbers[100];
    for(int i = 0; i<100; i++){
        cin>>numbers[i];

    }
/* 
    for(int j=0; j<100; j++){

        for(int k=0; k<100; k++){

            if(numbers[j]>numbers[k]){
                cout<<numbers[j]<<endl<<j+1<<endl;
            }
        }
    }
 */ 
/*     for(int z=0; z<100; z++){

        if(numbers[z]>numbers[z+1]){
            big=numbers[z];
        }else{
            big=numbers[z+1];
        }
    }
 */


    int num= numbers[0];
    for(int h=0; h<100; h++){
        if(num>numbers[h]){
            big=num;
            num=big;
            
        }else{
            big=numbers[h];
            num=numbers[h];
        }
    }
    return 0;
}
