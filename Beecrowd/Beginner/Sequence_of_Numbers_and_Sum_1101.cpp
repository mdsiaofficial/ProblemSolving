#include<bits/stdc++.h>
using namespace std;

int main()
{

/* 
 // solution 1;
    int count;
    //cin>>count;

    for (int i = 0; i = count; i++)
    {
        
        int a,b;
        cin>>a>>b;
        int sum=0;


        if(a>0 && b>0){
            if(a<b){
                for(int i=a; i<=b; i++){
                    cout<<i<<" ";
                    sum=sum+i;
                    
                }
            }else{
                for(int i=b; i<=a; i++){
                    cout<<i<<" ";
                    sum=sum+i;
                    
                }
            }

        }
        
        cout<<"Sum="<<sum<<endl;

    }
    
 */



    // solution 2 ;
    int n;
    int x, y, temp;
    int sum;
    
    while(1){
                
        cin >> x;
        cin >> y;
        // if(x <= 0) break;
        // if(y <= 0) break;
        if(x<=0 || y<=0){
            break;
        }
        
        if(x > y){
                temp= x;
                x = y;
                y = temp;
        }
        sum = 0;
        for(int i = x; i <= y; i++){
                cout << i << " ";
                sum += i;
        }
        cout << "Sum=" << sum << endl;
    }






/* 
    int a, b, i, j, temp, x = 0;
    int sum=0;
    for (; i; i++)
    {
        cin >> a >> b;
        if(a<=0 || b<=0)break;

        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        for (j = a; i <=b; j++)
        {
            cout << j << " ";
            sum += i;
        }
        

        cout << "Sum=" << sum << endl;
       
    }
    
 */

return 0;
}
