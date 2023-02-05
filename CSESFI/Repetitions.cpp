#include<bits/stdc++.h>
using namespace std;
int main() {
    string seq;
    cin >> seq;
    int n = seq.length();
    //char ss[n];
    //cout<<n<<endl;
    int c = 0;
    for(int i =1; i <=n; i++){
        if(seq[i-1]==seq[i]){
            c++;
            cout<<c<<" ";
        }else {
            c=0;
        }

        
    }

    
}