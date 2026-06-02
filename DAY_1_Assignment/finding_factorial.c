#include<stdio.h>
int main(){
    int num,i;
    long long factorial = 1;

    printf("enter a number : ");
    scanf("%d", &num);

    for(i = 1 ; i<= num ; i++){
        factorial *= i;
    }
    printf("factorial of %d = %11d\n" , num , factorial);

    return 0;
}