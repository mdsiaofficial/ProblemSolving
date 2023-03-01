#include<bits/stdc++.h>
using namespace std;



// ### UNSOLVED ###

int digits(int t){
    int r[to_string(t).length()];
    int c=0;
    while (t)
    {
        r[c]=t%10;
        t=t/10;
        c++;
    }
    cout<<r<<endl;
    return 0;
}


vector<int> digitize(unsigned long long n) {
    vector<int> result;
    do{
        result.push_back(n % 10);
        n /= 10;
    }while(n > 0);
    return result;
}

int main() {



    return 0;
}
