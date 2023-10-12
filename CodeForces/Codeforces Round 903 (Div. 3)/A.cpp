#include<bits/stdc++.h>

#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define forn(i, n) for (int i = 0; i < int(n); i++)


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

    
        int n, m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int c=0;
        string temp = x;
        bool p = false;
        while(temp.length() < m){
            temp = temp + temp;
            c++;
            
            // if(strstr(temp.c_str(),s.c_str())){
            //     p=true;
            //     break;
            // }

        }

        if (temp.find(s) != string::npos) {
            cout << c << endl;
        } else {
            cout << -1 << endl;
        }

        // if(p==true) cout<<c<<endl;
        // else cout<<-1<<endl;

    }

    
    return 0;
}
