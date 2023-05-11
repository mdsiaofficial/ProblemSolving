#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int ones=0;
    int others=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
            if(i==j){
                if(arr[i][j]==1) ones++;
                else others++;
            }else{
                if(arr[i][j]!=0) others++;
            }
        }
    }

    if(ones == n && others==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}