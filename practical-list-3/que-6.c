#include <stdio.h>

int main(){

    int i,j,k,height;

    printf("Enter the height: ");
    scanf("%d",&height);

    for(i=1;i<=height;i++){

        for(k=height; k>=i;k--){
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}