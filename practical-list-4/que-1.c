// WRITE A PROGRAM TO FIND THE SMALLEST FORM THE INTEGER ARRAY

#include <stdio.h>

int main(){

    int i,smallest, size, element;

    printf("enter the size: ");
    scanf("%d",&size);

     int arr[size];

     for(i=0;i<size;i++){
        printf("enter the arr[%d]: ", i);
        scanf("%d",&arr[i]);
     }

    smallest = arr[0];

    for(i=0; i<size ;i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    printf("the smallest number: %d", smallest);


    return 0;
}