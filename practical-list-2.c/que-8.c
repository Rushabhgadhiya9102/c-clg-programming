// implement a nested 'for' loop to print a simple 3x3 grid of numbers.

#include <stdio.h>

int main(){

    int i,j;

    for(i=0; i<3; i++){

        for(j=0; j<3; j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}