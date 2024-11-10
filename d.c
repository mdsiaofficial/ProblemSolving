#include <stdio.h>

int main() {
    int n, value, low, high, mid;

    printf("Enter the number of elements (sorted): ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &value);

    low = 0;
    high = n - 1;
    int found = 0; // To track if the element is found

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == value) {
            printf("Element %d found at index %d.\n", value, mid);
            found = 1; // Element found
            break;
        } else if (arr[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", value);
    }
    
    return 0;
}
