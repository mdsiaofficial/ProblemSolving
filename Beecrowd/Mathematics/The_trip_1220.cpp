
#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n;
    cin>>n;
    vector<double>costs;
    double sum=0;
    while (n--)
    {
        double x;
        cin>>x;
        costs.push_back(x);
        //sum=sum+x;
    }
    double avrg = accumulate(costs.begin(),costs.end()) /costs.size();
    vector<double>diff;
    for(int i:costs){
        diff.push_back(abs(i-avrg));
    }


    
    
    return 0;
}