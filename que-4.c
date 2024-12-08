/* WRITE A PROGRAM TO READ 2 INTEGER ARRAY AND CALCULATE THE SUM OF 2 ARRAY 
   ELEMENTS AND PRINT IT */

#include <stdio.h>

int main(){

    int i, size, element;

    printf("enter the size: ");
    scanf("%d",&size);

     int arr1[size];

     for(i=0;i<size;i++){
        printf("enter the arr1[%d]: ", i);
        scanf("%d",&arr1[i]);
     }

     printf("\n\nfirst array\n");

    for(i=0; i<size ;i++){
       printf("%d ", arr1[i]);
    }

    printf("\n");

     int arr2[size];

     for(i=0;i<size;i++){
        printf("enter the arr2[%d]: ", i);
        scanf("%d",&arr2[i]);
     }

     printf("\n\nsecond array\n");

    for(i=0; i<size ;i++){
       printf("%d ", arr2[i]);
    }

    printf("\n\n Sum of array \n");
    int result[size];

    for(i =0 ;i<size ; i++){
        result[i] = arr1[i] + arr2[i];
        printf("%d ",result[i]);
    }

    return 0;
}