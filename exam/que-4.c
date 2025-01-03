// WAP TO CALCUATE THE SUM OF N INTEGERS

#include <stdio.h>

int main (){

    int i,n,sum;

    printf("enter the numbers : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum += i; 
    }

    printf("the Sum of integers : %d ", sum);

    return 0;
}