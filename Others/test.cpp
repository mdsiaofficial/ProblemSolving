#include<iostream>
#include<vector>

using namespace std;
void displayVector(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}
int main(){


    vector<int>x;
    for(int i=0; i<4; i++){
        cout<<"Enter : "<<endl;
        int element;
        cin>>element;
        x.push_back(element);
    }
    displayVector(x);
    return 0;
}