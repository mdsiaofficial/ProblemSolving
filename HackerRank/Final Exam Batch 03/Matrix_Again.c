#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];

    // Read the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the last row
    for (int j = 0; j < m; j++) {
        printf("%d ", arr[n - 1][j]);
    }
    printf("\n");

    // Print the last column
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][m - 1]);
    }
    printf("\n");
    return 0;
}
