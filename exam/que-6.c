// WAP TO PRINT MATHEMATICAL FUNCTION CEIL()

#include <stdio.h>
#include <math.h>

int main (){

    float num , result;

    printf("Enter the value with point : ");
    scanf("%f",&num);

    result = ceil(num);

    printf("Result : %.2f", result);

    return 0;
}