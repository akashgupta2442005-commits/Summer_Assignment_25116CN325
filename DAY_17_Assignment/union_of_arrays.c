#include <stdio.h>
int main() {
    int n1, n2, i, j, found;

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

    printf("Union of arrays:\n");

    // Print unique elements of first array
    for(i = 0; i < n1; i++) {
        found = 0;
        for(j = 0; j < i; j++) {
            if(arr1[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", arr1[i]);
    }

    // Print elements of second array not present in first array
    for(i = 0; i < n2; i++) {
        found = 0;

        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            int duplicate = 0;
            for(j = 0; j < i; j++) {
                if(arr2[i] == arr2[j]) {
                    duplicate = 1;
                    break;
                }
            }
            if(!duplicate)
                printf("%d ", arr2[i]);
        }
    }
    return 0;
}