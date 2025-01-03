// REVERSE THE ARRAY 

#include <stdio.h>

int main(){

    int i, num, arr[10];

    for(i=0; i<10;i++){
        printf("enter the Elements : ");
        scanf("%d",&arr[i]);
    }

    for(i=9 ; i>=0; i--){
        printf("%d ",arr[i]);
    }

    return 0;
}