#include<stdio.h>
int main(){
    int N ,sum = 0 ;
    printf("enter N: ");
    scanf("%d",&N);

    for(int i = 1 ; i<= N ; i++){
        sum += i ;
    }
    printf("sum of first %d natural numbers = %d\n" , N , sum);
    
    return 0 ;

}