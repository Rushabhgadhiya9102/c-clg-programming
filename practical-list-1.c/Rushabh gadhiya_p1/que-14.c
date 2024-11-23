#include <stdio.h>

void main() {

    int num1, num2;

    printf("enter the first number: ");
    scanf("%d", &num1);

    printf("enter the second number: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("first number : %d\n", num1);
    printf("second number : %d", num2);
}