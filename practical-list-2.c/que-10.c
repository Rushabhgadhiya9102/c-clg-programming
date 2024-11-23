/*: Write a program that demonstrates the use of the
`goto` statement to jump out of nested loops.*/

#include <stdio.h>

int main() {
    int i, j;

    exit_loops:
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("i = %d, j = %d\n", i, j);
            if (i == 2 && j == 2) {
                printf("Condition met, exiting both loops.\n");
                goto exit_loops; 
            }
        }
    }

    printf("Exited the nested loops.\n");
    return 0;
}