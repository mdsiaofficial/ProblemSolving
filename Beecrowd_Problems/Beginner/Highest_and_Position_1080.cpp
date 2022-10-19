#include<bits/stdc++.h>
using namespace std;
// https://www.beecrowd.com.br/judge/en/problems/view/1080
int main(){

    // read 100 int

    int position=0;
    int big=0;
    //int numbers[100];


/*     
    for(int i = 0; i<100; i++){
        cin>>numbers[i];
        
    }

 */


/*  // failed here
    for(int j=0; j<100; j++){

        for(int k=0; k<100; k++){

            if(numbers[j]>numbers[k]){
                cout<<numbers[j]<<endl<<j+1<<endl;
            }
        }
    }
 */ 


/*     
    // failed here
    for(int z=0; z<100; z++){

        if(numbers[z]>numbers[z+1]){
            big=numbers[z];
        }else{
            big=numbers[z+1];
        }
    }
 */




/* 
    // half solved : gets biggest number , not position //

    int num= numbers[0];
    for(int h=0; h<100; h++){
        if(num>numbers[h]){
            big=num;
            num=big;
            position= h-1;
            
        }else{
            big=numbers[h];
            num=numbers[h];
            position = h+1;
        }
    }


 */
    

    //last try : solved
    int n;
    for(int i = 0; i<100; i++){
        cin>>n;
        if(n>big){
            big=n;
            position=i+1;
        }
        
    }

    cout<<endl<<big<<endl<<position<<endl;
    return 0;
}
