#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
/* 
    int a, b;
    cin >> a >> b;
    int c=1;
    
    for (int i = 1; i <= b; i++)
    {
        for (int j = c; j<a; j++)
        {
            cout << j << " ";
            c++;

        }
        cout <<c<<endl;
        
    }
 */

/*  // solved 
    int x, y;
    cin >> x;
    cin >> y;
    int n = 1;
    for (int i = 1; i <= y; i++)
    {
        if (n == x)
        {
            cout << i << "\n";
            n = 1;
        }
        else
        {
            cout << i << " ";
            n++;
        }
    }

 */

/*
    int x,y,i,count=0;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
    {
        printf("%d ",i);
        count++;
        if(count==x)
        {
            printf("\n");
            count=0;
        }
    }
*/

// try3

    int x, y, line, col;
    cin >> x >> y;

    line = y / x;
    int d = x;
    int temp = 1;
    for (int i = 1; i <= k; I++)
    {
        cout << temp;
        for (int j = temp + 1; i < d; j++)
        {
            cout << " " << j;
        }
        cout << endl;
            
    }

    return 0;
}
