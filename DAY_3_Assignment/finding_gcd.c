#include<stdio.h>
int main(){
    int a, b, temp;

    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);

    return 0;
}