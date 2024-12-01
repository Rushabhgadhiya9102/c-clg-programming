#include <stdio.h>

int main() {

    int i, j, row=3, col=3;
    int arr[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}}; 

    printf("first matrix\n");

    for(i = 1; i <= row; i++) {
        for(j = 1; j <= col; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // int arr2[3][3]={{9,8,7},
    //                 {6,5,4},
    //                 {3,2,1}};

    //  printf("second matrix\n");

    // for(i = 1; i <= row; i++) {
    //     for(j = 1; j <= col; j++) {
    //         printf("%d ",arr2[i][j]);
    //     }
    //     printf("\n");
    // }

    //  printf("multiply of the matrix\n");

    // for(i = 1; i <= row; i++) {
    //     for(j = 1; j <= col; j++) {
    //         printf("%d ",arr[i][j]*arr2[i][j]);
    //     }
    //     printf("\n");
    // }



    return 0;
}