// implement a program that calculates and prints the factorial of a given number using a 'for' loop.

#include <stdio.h>

int main(){

    int i,num,factorial = 1;

    printf("enter the number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        factorial*=i;
    }

    printf("the factorial is : %d",factorial);

    return 0;
}