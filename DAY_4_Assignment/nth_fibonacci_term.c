#include<stdio.h>
int main(){
    int n, a = 0, b = 1, c, i;
    printf("enter n :");
    scanf("%d", &n);

    for(i = 1; i < n;  i++){
        c = a+b;
        a = b;
        b = c;
    }
    printf("nth fibonacci term = %d",a);

    return 0;
}