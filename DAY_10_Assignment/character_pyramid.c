#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {

        // Print spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
    return 0;
}