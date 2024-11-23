/* create a program that takes a start and an end value as input and claculates the sum of even numbers 
   and the odd numbers within that range. print both sums separately */
   

#include <stdio.h>

int main(){

    int i, start, end, even, odd, sumEven = 0, sumOdd = 0;

    printf("enter the starting number: ");
    scanf("%d",&start);

    printf("enter the end number: ");
    scanf("%d",&end);

    printf("even number\n");

    for( i=start; i<=end; i++){

        if(i%2 == 0){
            even = i;
            printf("%d ",even);
            sumEven += i; 
        }

    }

     printf("\n\nthe sum of even is : %d ",sumEven);


    printf("\n\nodd number\n");

    for(i=start; i<=end; i++){
         if(i%2 != 0){
            odd = i;
            printf("%d ",odd);
            sumOdd += i; 
        }
    }

    printf("\nthe sum of odd is : %d",sumOdd);

  
    return 0;
}