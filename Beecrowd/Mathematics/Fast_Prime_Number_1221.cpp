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

bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

bool checkprime(ll n){
    bool x;
    int c=0;
    for(int j=1;j<=n;j++){
        if(n%j==0)
        {
            c++;
            //c=c+1;
        }
    }

    if(c==2){
        //cout<<"Prime"<<endl;
        x = true;
    }else{
        //cout<<"Not Prime"<<endl;
        x= false;
    }

    return x;
}


// unsolved
int main(){


/* //this code will take input number unlimited time and output it is prime or not.
    // if prime , program will end.
    int n;
    while (true)
    {
        cin>>n;
        if(isPrime(n)==true){
            cout<<"Prime"<<endl;
            break;
        }else{
            cout<<"Not Prime"<<endl;
        }
    }
     */

/* 
    ll t;
    cin>>t;
    for(int i=0; i<t; i++){
        ll n;
        cin>>n;
        if(isPrime(n)==true){
            cout<<"Prime"<<endl;
            break;
        }else{
            cout<<"Not Prime"<<endl;
        }
    }
 */


/* 
    ll n;
    while (true)
    {
        cin>>n;
        if(checkprime(n)==true){
            cout<<"Prime"<<endl;
            break;
        }else{
            cout<<"Not Prime"<<endl;
        }
    }

     */


    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        int c=0;
        int n;
        cin>>n;

        if(n==0){
            cout<<"Not Prime"<<endl;
        }
        
        if(n==1){
            cout<<"Not Prime"<<endl;
        }

        if(n==2){
            cout<<"Prime"<<endl;
        }

        for(int j=2;j<=sqrt(n)+1;j++){
            if(n%j==0)
            {
                c++;
                //c=c+1;
            }
            if(c==2){
                break;
            }
        }

        if(c>=1){
            cout<<"Not Prime"<<endl;
        }else{
            cout<<"Prime"<<endl;
        }

    }

    return 0;
}