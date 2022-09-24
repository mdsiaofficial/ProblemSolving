#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;


    int lc=0;
    int uc=0;
//int arr[n]={};
    for(int h=1; h<=t; h++){
        int n;
        cin>>n;
        string ss;
        cin>>ss;

        for(int i=0; i<sizeof(ss); i++){
            char arr[n];
            arr[i]=ss[i];
        //cout<<arr[i]<<endl;
            for(int j=0; j<sizeof(ss); j++){
                if(arr[j]>='a' && arr[j]<='z'){
                    lc++;
                }else if(arr[j]>='Z' && arr[j]<='Z'){
                    uc++;
                }
            }
        }
        if(lc>uc){
            cout<<"Alice"<<endl;
        }else if(uc>lc){
            cout<<"Bob"<<endl;
        }

    }


    return 0;
}


