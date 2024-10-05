#include <stdio.h>

void main(){

     int num1, num2;

    printf("enter the first number: ");
    scanf("%d",&num1);

    printf("enter the second number: ");
    scanf("%d",&num2);

    if(num1<num2){

        printf("%d is miniimum", num1);

    }else if(num2<num1){

        printf("%d is minimum", num2);

    }else if(num1 == num2){

        printf("%d and %d are equal", num1,num2);

    }

}