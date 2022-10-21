#include<bits/stdc++.h>
using namespace std;
int main(){

    int width, height, x, y, r;
    cin>>width>>height>>x>>y>>r;
/*  // failed
    if(x>0 && y>0 && x<width && y<height){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;

    }
 */


    if(x-r>=0 && y-r>=0 && x+r<=width && y+r<=height){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;

    }
    return 0;

}