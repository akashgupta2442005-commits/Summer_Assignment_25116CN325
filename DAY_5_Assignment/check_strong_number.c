#include<stdio.h>
int main(){
    int n, t, r, sum = 0, f, i;
    scanf("%d", &n);

    t = n;
    while(t){
        r = t % 10;
        f = 1;
        for(i = 1; i <= r; i++)
            f *= i;
        sum += f;
        t /= 10;

    }

    printf(sum == n ? "strong number" : "not strong number" );
        
        return 0;
}
