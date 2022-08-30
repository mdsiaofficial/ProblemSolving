//https://blog.csdn.net/Syclus/article/details/122936358
#include<iostream>
#include<algorithm>
#define N 1010
using namespace std;

int n,m,i,j,k,maxx=0,minn=0;
int a[N],b[N]; 

int main()
{
    
    int sum=0; 
    cin>>n>>m; k=n; 
    for(i=1;i<=m;i++){
        cin>>a[i];
        b[i]=a[i]; 
        sum+=a[i];
    }
        
    while(n--){
        sort(a+1, a+m+1);
        maxx+=a[m];//AAA
        a[m]--;
    }
    
    while(k--){
        i=1; 
        int flag=1; 
        sort(b+1, b+m+1); 
        while(flag){
                if(b[i]>0){
                    minn+=b[i];//* 
                    b[i]--; 
                    flag=0;
                }
                
                i++;
            }

    }



    cout<<maxx<<" "<<minn<<endl; 
    return 0;
}