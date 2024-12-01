#include <stdio.h>

int main(){

    int i,j,m1,m2,m3,m4;

    printf("first matrix\n");

    for(m1=1;m1<=2;m1++){
        for(m2=1;m2<=2;m2++){
            printf("%d ",m2);
        }
        printf("\n");
    }

    printf("second matrix\n");

    for(m3=1;m3<=2;m3++){
        for(m4=5;m4<=6;m4++){
            printf("%d ",m4);
        }
        printf("\n");
    }

    printf("\n");

    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            printf("%d ",m2*m4);
        }
        printf("\n");
    }

    return 0;
}