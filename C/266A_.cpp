#include<bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    string stone;
    cin>>n>>stone;
    int count=0;
    for(int i=1; i<n; i++){
		if(stone[i]==stone[i-1]){
			stone[i] = stone[i-1];
			count++;
		}		
	}
    cout<<count<<endl;
    return 0;    
}