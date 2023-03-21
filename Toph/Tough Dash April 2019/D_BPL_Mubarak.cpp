#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int c=0;
        int over=0;
        int ball=0;
        string bowls;
        cin>>bowls;

        for(int j=0; j<bowls.length(); j++){
            if(bowls[j]!='N' && bowls[j]!='W' && bowls[j]!='D'){
                c++;
            }
        }
        ball=c%6;
        over=c/6;

        if(ball == 0 && over != 0)
			printf("%d %s\n", over, (over>1)? "OVERS" : "OVER");
		else if(over == 0 && ball != 0)
			printf("%d %s\n", ball, (ball>1)? "BALLS" : "BALL");
		else
			printf("%d %s %d %s\n", over, (over>1)? "OVERS" : "OVER", ball, (ball>1)? "BALLS" : "BALL");
    }

    return 0;
}