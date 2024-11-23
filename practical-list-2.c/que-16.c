/* write a program that takes integer input form user and checks if it is a palindrome (reads the smae forwards and backwards)
    print whetehr the number is a palindrome or not */

 #include <stdio.h>

    int main(){

        int num, result, temp, i=0;

        printf("enter the number: ");
        scanf("%d",&num);

        temp = num;

        while(num>0){

            result = num%10;
            i = result + (i*10);
            num /= 10;

        }

        if(temp == i){

            printf("number is palindrome");
        }else{
            printf("number is not palindrome");
        }

        return 0;
    }