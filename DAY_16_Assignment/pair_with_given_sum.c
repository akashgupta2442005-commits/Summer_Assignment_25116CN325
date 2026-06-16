#include <stdio.h>
int main() {
    int n, i, j, sum, found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("No pair found with the given sum.\n");
    return 0;
}