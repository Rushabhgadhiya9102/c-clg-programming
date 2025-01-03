#include <stdio.h>

int main (){

    int age;
    float height;
    char name[50];

    printf("Enter the age : ");
    scanf("%d",&age);

    printf("Enter the height : ");
    scanf("%f",&height);

    printf("Enter the name : ");
    scanf("%d",&name);

    printf("------- output -------\n");

    printf("age : %d\n",age);
    printf("height : %.2f\n",height);
    printf("name : %s\n",name);

    return 0;
}