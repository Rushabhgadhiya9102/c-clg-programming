// use the 'continue' statement in a 'for' loop to print numbers from 1 to 10, but skip printing the number 5.

#include <stdio.h>

int main (){

    int i;

    for(i=1; i<=10; i++){

        if(i == 5){
            continue;
        }

        printf("%d ",i);
    }

    return 0;
}