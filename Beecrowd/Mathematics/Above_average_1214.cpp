#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int nums[n], sum=0, c=0;;
        
        for(int i=0; i<n; i++){
            cin>>nums[i];
            sum=sum+nums[i];
        }
        double avrg=(double)sum/(double)n;
        for(int i=0; i<n; i++){
            if((double)nums[i]>avrg) c++;
        }
        double aa= (100*c)/(double)n;

        cout<<fixed<<setprecision(3)<<aa<<"%"<<endl;

    }
    
    return 0;
}
