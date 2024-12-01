// CREATE A SIMPLE CALCULATOR USING LOOP 

#include <stdio.h>

// ----------------------------------- USER DEFINE FUNCTION -------------------------------

float add(float num1, float num2) {             // ADDITON
    float sum = num1 + num2;
    printf("\tthe answer is:  %.2f", sum);
    printf("\n\n");
}

float sub(float num1, float num2) {             // SUBTRACTION
    float sub = num1 - num2;
    printf("\tthe answer is:  %.2f", sub);
    printf("\n\n");
}

float mul(float num1, float num2) {             // MULTIPLY
    float mul = num1 * num2;
    printf("\tthe answer is:  %.2f", mul);
    printf("\n\n");
}

float div(float num1, float num2) {             // DIVISION
    float divided = num1 / num2;
    printf("\tthe answer is:  %.2f", divided);
    printf("\n\n");
}

float mod(float num1, float num2) {             // MODULAS
    float mod = (int)num1 % (int)num2;
    printf("\tthe answer is:  %.2f", mod);
    printf("\n\n");
}

// --------------------------- MAIN FUNCTION ----------------------------

int main() {

    float num1, num2;       // DECLARE THE VARIABLE
    int op;
    char alpha;

    printf("press 's' to start: ");
    scanf("%c", &alpha);

    if(alpha == 's') {

        while(1) {

            printf("
                   \tpress 1 to addition\n
                   \tpress 2 to subtraction\n
                   \tpress 3 to multiply\n
                   \tpress 4 to division\n
                   \tpress 5 to mod\n
                   \tpress 0 to exit\n\n"
                  );

            printf("enter the operator: ");     // ENTER THE OPERATOR
            scanf("%d", &op);

            if(op == 0) {
                printf("good bye");
                break;
            }

            printf("enter the first number: ");          // ENTER THE NUMBER
            scanf("%f", &num1);

            printf("enter the number again: ");         // ENTER THE NUMBER
            scanf("%f", &num2);

            switch(op) {        // SWITCH CASE FOR OPERATOR

            case 1:
                add(num1, num2);    // ADDITION
                break;

            case 2:
                sub(num1, num2);    // SUBTRACTION
                break;

            case 3:
                mul(num1, num2);    // MULTIPLICATION
                break;

            case 4:
                div(num1, num2);    // DIVISION
                break;

            case 5:
                mod(num1, num2);   // MODULAS
                break;

            default :
                printf("invalid option");       // DEFAULT SECTION
                break;
            }
        }
    } else {
        printf("sorry, couldn't start the calculator");
    }

    return 0;
}