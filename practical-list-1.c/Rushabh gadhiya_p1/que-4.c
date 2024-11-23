#include <stdio.h>
#include <string.h>

void main() {

    char firstName[20], lastName[20];

    printf("enter your first name: ");
    scanf("%s", &firstName);

    printf("enter your last name: ");
    scanf("%s", &lastName);

    strcat(firstName, lastName);

    printf("%s", firstName);

}