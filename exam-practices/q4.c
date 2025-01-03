#include <stdio.h>

int main (){

     float principle, rate, time, simpleintrest;

    printf("Enter the principle : ");
    scanf("%f",&principle);

    printf("Enter the rate : ");
    scanf("%f",&rate);

    printf("Enter the time : ");
    scanf("%f",&time);

    simpleintrest = (principle*rate*time)/100;

    printf("The simple intrest is : %.2f",simpleintrest);

    return 0;
}