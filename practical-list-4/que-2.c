// WRITE A PROGRAM TO FIND THE AVERAGE OF THE INTEGER NUMBER STORED IN THE ARRAY

#include <stdio.h>

int main() {

    int i, size, element, sum = 0;
    float average;

    printf("enter the size: ");
    scanf("%d", &size);

    int arr[size];

    for(i = 0; i < size; i++) {
        printf("enter the arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

      for(i=0; i<size ;i++){   
        sum += arr[i];
    }

    average = (float)sum/size;

    printf("%.2f" , average);

    return 0;
}