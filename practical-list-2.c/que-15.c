// create a program that reads an integer from the user and calculates the sum of its digits using 'while' loop .

#include <stdio.h>

int main(){

    int sum=0,temp,num;

    printf("enter the number: ");
    scanf("%d",&num);

    while(num>0){
        temp = num%10;
        sum += temp;
        num/=10;
    }

    printf("the sum of the digit :%d",sum);

    return 0;
}