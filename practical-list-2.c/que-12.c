// create a program that takes a number as input and prnits its reverse using a while loop.

#include <stdio.h>

int main (){

    int i;
    printf("enter the number: ");
    scanf("%d",&i);

    while(i>0){

        printf("%d ",i);
        i--;
    }

    return 0;
}