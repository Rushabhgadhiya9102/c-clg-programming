#include <stdio.h>
#include <string.h>

void main(){

    char name[50];

    printf("enter your name: ");
    scanf("%s",&name);

    int length = strlen(name);

    printf("the length is : %d", length);

}