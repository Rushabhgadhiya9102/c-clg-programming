#include <stdio.h>

void main(){

    int num1, num2;

    printf("enter the first number: ");
    scanf("%d",&num1);

    num1++;
    printf("the value is increment: %d\n", num1);

    printf("\nenter the second number: ");
    scanf("%d",&num2);

    num2--;
    printf("the value is decrement: %d", num2);

}