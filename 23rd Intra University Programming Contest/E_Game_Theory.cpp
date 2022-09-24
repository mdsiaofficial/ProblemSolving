#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; //test case variable declaration

    cin>>t; //input test case variable


    int lc=0; //lower case variable
    int uc=0; //upper case variable
//int arr[n]={};
    for(int h=1; h<=t; h++){ //loop for test case
        int n; //input size of string variable
        cin>>n; //input size of string variable
        string ss; //input string variable
        cin>>ss; //input string variable

        for(int i=0; i<sizeof(ss); i++){ //loop for string
            char arr[n]; //array for string variable
            arr[i]=ss[i]; //array for string variable
        //cout<<arr[i]<<endl;
            for(int j=0; j<sizeof(ss); j++){ //loop for string
                if(arr[j]>='a' && arr[j]<='z'){ //condition for lower case
                    lc++; //increment lower case
                }else if(arr[j]>='Z' && arr[j]<='Z'){ //condition for upper case
                    uc++; //increment upper case
                }
            }
        }
        if(lc>uc){ //condition for lower case
            cout<<"Alice"<<endl; //print alice
        }else if(uc>lc){ //condition for upper case
            cout<<"Bob"<<endl; //print bob
        }

    }


    return 0;
}
