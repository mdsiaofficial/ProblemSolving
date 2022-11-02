#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int results[t];
    for(int i=0; i<t; i++) {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++) {
            
        }
        int result = 1;
        for(int j=0; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[j]==arr[k]) {
                    result = 0;
                    break;
                }
            }
        }
        results [i] = result;
    }
    for(int i=0; i<t; i++) {
        if(results[i] == 0) {
        printf("NO\n");
        } else {
        printf("YES\n");
        }
    }
return 0;
}