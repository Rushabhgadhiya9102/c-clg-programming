// create a program that takes an input number from the user and checks if it is a prime number using a 'for' loop.

#include <stdio.h>

int main() {

    int i, num, count = 0;

    printf("enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {

        if(num % i == 0) {
            count ++;
        }
    }

    if(count == 2) {
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }

    return 0;
}
