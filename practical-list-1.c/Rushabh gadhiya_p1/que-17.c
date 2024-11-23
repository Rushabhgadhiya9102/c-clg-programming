#include <stdio.h>

// ----------------------------------- USER DEFINE FUNCTION -------------------------------
 
float add (float num1, float num2){             // ADDITON
    float sum = num1 + num2;
    printf("%.2f",sum);     
}
 
float sub (float num1, float num2){             // SUBTRACTION
    float sub = num1 - num2;
    printf("%.2f",sub);     
}

float mul (float num1, float num2){             // MULTIPLY
    float mul = num1 * num2;
    printf("%.2f",mul);     
}

float div (float num1, float num2){             // DIVISION
    float divided = num1 / num2;
    printf("%.2f",divided);     
}

float mod (float num1, float num2){             // MODULAS
    float mod = (int)num1 % (int)num2;
    printf("%.2f",mod);     
}

// --------------------------- MAIN FUNCTION ----------------------------

int main(){

    float num1, num2;       // DECLARE THE VARIABLE
    int op;

    printf("press 1 to addition\n");    
    printf("press 2 to subtraction\n");    
    printf("press 3 to multiply\n");    
    printf("press 4 to division\n");    
    printf("press 5 to mod\n\n");   

    printf("enter the operator: ");     // ENTER THE OPERATOR
    scanf("%d",&op); 

    printf("enter the first number:");          // ENTER THE NUMBER
    scanf("%f",&num1);
    printf("enter the second number:");         // ENTER THE NUMBER
    scanf("%f",&num2);

    switch(op){         // SWITCH CASE FOR OPERATOR

        case 1:
            add(num1,num2);     // ADDITION
            break;

        case 2:
            sub(num1,num2);     // SUBTRACTION
            break;

        case 3:
            mul(num1,num2);     // MULTIPLICATION
            break;

        case 4:
            div(num1,num2);     // DIVISION
            break;

        case 5:
             mod(num1,num2);    // MODULAS
            break;

        default :
            printf("invalid option");       // DEFAULT SECTION
            break;    
    }

    return 0;
}