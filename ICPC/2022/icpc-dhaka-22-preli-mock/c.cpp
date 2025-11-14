#include <iostream>
using namespace std;
int main()
{

    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long s[n];
        long long p[n];
        for(long long i=0; i<n; i++){
            cin>>s[i];
            p[i]=0;
        }
        long long q;
        cin>>q;
        long long qq[q];
        int x,y;

        for(int i=1; i<=q; i++){
            if(i==1){
                cin>>qq[1]>>x>>y;
            }
            if(s[x]>s[y]){
                p[x]++;
            }else{
                p[y]++;

            }
            if(i==2){
                cin>>qq[2]>>x;
                cout<<p[x]<<endl;
            }
            if(i==3){
                cin>>qq[3]>>x;
                if(s[x]>s[y]){
                    cout<<x<<endl;

                }else{
                    cout<<y<<endl;

                }
            }
        }
    }
    return 0;
}
