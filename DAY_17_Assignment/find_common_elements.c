#include <stdio.h>
int main() {
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are:\n");

    for(i = 0; i < n1; i++) {
        int duplicate = 0;

        // Check if already printed
        for(k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate)
            continue;

        // Check if element exists in second array
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}