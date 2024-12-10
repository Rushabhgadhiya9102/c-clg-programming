//  WRITE A PROGRAM THAT READ INTEGER AND PRINT ONLY EVEN NUMBER

#include <stdio.h>

int main(){

    int i,even, size;

    printf("enter the size: ");
    scanf("%d",&size);

     int arr[size];

     for(i=0;i<size;i++){
        printf("enter the arr[%d]: ", i);
        scanf("%d",&arr[i]);
     }

    for(i=0; i<size ;i++){
        if( arr[i] % 2 == 0){
            even = arr[i];

            printf("%d ", even);
        }
    }

    return 0;
}