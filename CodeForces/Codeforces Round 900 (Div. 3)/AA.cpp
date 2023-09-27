/*
This code takes in an array of integers and an integer K.
The code starts by defining an int variable named t and setting it to the first input.
The code then enters a while loop that will run until t is 0.
The code will then create an int variable named n and an int variable named k and set them to the next two inputs.
The code will then create an array of ints named arr and set its values to the next n inputs.
The code will then create an int variable named d and set it to 0.
The code will then enter a for loop that will run n times.
The code will then check if the value at index i of arr is equal to k.
If it is, the code will set d to 1.
The code will then check if d is equal to 1.
If it is, the code will print "YES".
If it isn't, the code will print "NO".
The code will then decrement t by 1.
*/

#include <iostream>
#include <vector>
#include <map>
 
 // mine solved
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int d=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k) d=1;
        }
        if(d==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    
    return 0;
}