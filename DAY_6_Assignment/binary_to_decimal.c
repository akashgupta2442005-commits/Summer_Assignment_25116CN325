#include<stdio.h>

int main(){
    int bin, dec = 0, base  = 1, rem;
    scanf("%d", &bin);

    while(bin > 0){
        rem = bin % 10;
        dec = dec + rem * base;
        base = base * 2;
        bin =  bin / 10;
    }
    printf("%d", dec);
    return 0;
}