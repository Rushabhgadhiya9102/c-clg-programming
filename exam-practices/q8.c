#include <stdio.h>
#define pi 3.14

int main(){

    float radius,area;

    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    area = pi * radius * radius;

    printf("the area is : %.2f", area);

    return 0;
}