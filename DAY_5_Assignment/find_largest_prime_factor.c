#include<stdio.h>
int main(){
    int n, i, max = 1;
    scanf("%d", &n);

    for(i = 2; i <=n; i++){
        while(n % i == 0){
            max = i;
            n /= i;
        }
    }

    printf("%d", max);

    return 0;
}