
// to check if given sting is palindrome or not

#include <stdio.h>
#include <string.h>

int main (){

    char str[50], rev[50];      // DECLARE THE FUNCTION

    printf("enter the string: ");       // ENTER THE STRING
    scanf("%s",&str);

    strcpy(rev, str);       // STRING COPY FROM STR TO REV  
    strrev(rev);        // STRING REVERSE

    if(strcmp(str,rev) == 0){       // COMPARE THE STRING USING STRING COMPARE
        printf("%s : %s \nThe given string is palindrome",str,rev);
    }else{
        printf("%s : %s \nThe given string is not palindrome",str,rev);
    }

    return 0;
}