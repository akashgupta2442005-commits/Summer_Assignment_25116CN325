#include <stdio.h>
int main() {
    int n, i, j;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0, maxElement;

    for(i = 0; i < n; i++) {
        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency element = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);
    return 0;
}