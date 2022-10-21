#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int main(){


    float sum=0;
    float div=1;
    for(float i=1; i<=39; i=i+2){
        sum = sum + (i/div);

        div = div*2;

    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
    
    


/* 
    //c solution

    float soma = 1;
    int b = 2;
    for(int i = 3; i < 40; i++){
            soma += (float)i/(float)b;
            i++;
            b *= 2;
    }
    printf("%.2f\n",soma);
 */

    return 0;

}


