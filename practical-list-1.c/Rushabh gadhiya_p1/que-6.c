#include <stdio.h>
#include <math.h>

void main(){

    int num, result;

    printf("enter the number: ");
    scanf("%d",&num);

    result = sqrt(num);

    printf("the square root of %d is : %d", num, result);

}