// write 'do - while' loop program that asks the user for a number and prints it,continuing until the user inputs 0

#include <stdio.h>

int main() {

    int i;

    do {
        printf("enter the number: ");
        scanf("%d", &i);

        if(i == 0) {

            printf("Good bye");
            break;
        }

        printf("the printed value :%d\n", i);
    } while(1);

    return 0;
}