#include <stdio.h>

void main(){

    int a = 1, b = 0;
    int num1, num2;

    num1 = a;
    num2 = b;

    if(num1 == 1 & num2 == 0){
        printf("AND operator is successfully executed %d and %d\n",num1,num2);
    }

    if(num1 == 0 | num1 == 1){
        printf("OR operator is successfully executed %d\n",num1);
    }

     printf("Not operator is successfully executed %d" ,~num1);

}