#include <stdio.h>
#include <string.h>

void main(){

    char string[100];

    printf("enter the string: ");
    scanf("%s",string);

    strrev(string);

    printf("%s", string);

}