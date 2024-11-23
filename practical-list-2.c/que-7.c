/* write a program that uses a 'for' loop to print numbers from 1 to 10 , 
   but stops and exits the loop when it reaches 7. */

#include <stdio.h>

int main(){

    int i;

    for(i=1 ; i<=10; i++){

        if( i == 7){
            break;
        }

        printf("%d ",i);
    }

    return 0;
}