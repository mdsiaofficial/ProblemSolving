#include<bits/stdc++.h>

using namespace std;
int main(){
/* 
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
     */

    int n;
    cin>>n;
    string s;
    cin>>s;
    int r=0;
    int g=0;
    int b=0;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            if(s[i]=='R'){
                r++;
            }else if(s[i]=='G'){
                g++;
            }
            else if(s[i]=='B'){
                b++;
            }
        }
    }
    cout<<r+g+b<<endl;

    return 0;    
}

