#include<bits/stdc++.h>
using namespace std;
int main(){

    // read 100 int

    int position;
    int numbers[100];
    for(int i = 0; i<100; i++){
        cin>>numbers[i];

    }

    for(int j=0; j<100; j++){

        for(int k=0; k<100; k++){

            if(numbers[j]>numbers[k]){
                cout<<numbers[j]<<endl<<j+1<<endl;
            }
        }
    }


    return 0;
}
