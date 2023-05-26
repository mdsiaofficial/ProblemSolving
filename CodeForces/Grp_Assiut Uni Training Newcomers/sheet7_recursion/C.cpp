#include<bits/stdc++.h>
using namespace std;
int c=0;
void y(int n){
    int d = log10(n)+1; // digits in the number
    int x=d-1;
    if(n==0) return;
    y(n/10);
    cout<<n%10<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        y(n);
        cout<<endl;
    }
    
}

//     3967
//      3967 % 10 = 7 || 3967 / 10 = 396
//      396 % 10 = 6  || 396 / 10 = 39
//      39 % 10 = 9   || 39 / 10 = 3
//      3 % 10 = 3    || 3 / 10 = 0


// 3967 -> 396 -> 39 -> 3 -> 0 << 3 << 9 << 6 << 7 << end
/*
1. Find the length and position of the axes of the conic ax2 + 2hxy + by2 + 2gx + 2fy + c = 0
2. Identity the conic given by x3 + 4xy + y2 - 2x + 2y -6 = 0 also find the length and equation of its axes.
3. Reduce the conic 4x3 + y2 - 4xy - 8x - 6y + 5 = 0 to standard form.

*/