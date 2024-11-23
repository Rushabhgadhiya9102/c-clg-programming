// wirte a program that takes an integer as input and counts the number of digits using a 'while' loop .

#include <stdio.h>

int main() {

    int num, i = 0;

    printf("enter the number: ");
    scanf("%d", &num);

    while(num != 0) {

        num /= 10;

        i++;
    }

    printf("%d", i);

    return 0;
}