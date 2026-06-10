#include <stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        // Print spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}