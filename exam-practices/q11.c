#include <stdio.h>

int main (){

    float num1, num2, sum,diffrence,product, quotient;

    printf("Enter the first floating-point number : ");
    scanf("%f",&num1);

    printf("Enter the second floating-point number : ");
    scanf("%f",&num2);

    sum = num1 + num2;
    diffrence = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("\n Result : \n");
    printf("Sum : %.2f\n",sum);
    printf("diffrence : %.2f\n",diffrence);
    printf("product : %.2f\n",product);
    printf("quotient : %.2f\n",quotient);

    return 0;
}