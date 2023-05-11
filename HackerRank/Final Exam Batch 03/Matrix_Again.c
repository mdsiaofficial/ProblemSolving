#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=n-1; i<n; i++){
        
        for(int j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    for(int i=m-1; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[j][i]);
        }
    }

    return 0;
}