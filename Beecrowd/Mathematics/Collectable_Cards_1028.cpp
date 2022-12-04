#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;



int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int num1, num2, min, hcf=1;
        scanf("%d%d", &num1, &num2);

        
        int n1 = (num1>num2) ? num1 : num2;
        int n2 = (num1<num2) ? num1 : num2;
/*      
        for(int j=1; j<=min; j++)
        {
            
            if(num1%j==0 && num2%j==0)
            {
                hcf = j;
            }
        }
 */

        while (n2!=0)
        {
            hcf = n1%n2;
            n1=n2;
            n2= hcf;
        }
        
        printf("%d\n",n1);
    }
    return 0;
}