#include<bits/stdc++.h>
using namespace std;
int main(){
    //int a,b,c,d,e;
    //cin>>a>>b>>c>>d>>e;

    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    int even=0,odd=0,pos=0,neg=0;

    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }

        if(arr[i]>0){
            pos++;
        }else{
            neg++;
        }
    }
    
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;

    return 0;
}