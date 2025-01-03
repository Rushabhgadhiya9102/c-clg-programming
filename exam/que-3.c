// WAP TO INCREMENT AND DECREMENT OPERATOR

#include <stdio.h>

int main (){

    int num1,num2,num3,num4;

    printf("Enter the post increment value : ");
    scanf("%d", &num1);

    printf("Enter the post decrement value : ");
    scanf("%d", &num2);

    num1++;
    printf("post increment value : %d\n", num1);

    num2--;
    printf("post decrement value : %d\n\n", num2);


    printf("Enter the pre increment value : ");
    scanf("%d", &num3);

    printf("Enter the pre decrement value : ");
    scanf("%d", &num4);

    ++num3;
    printf("pre increment value : %d\n", num3);

    --num4;
    printf("pre decrement value : %d", num4);

    return 0;
}