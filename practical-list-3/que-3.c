#include <stdio.h>

int main() {

    int i, remainder, result, num;

    printf("the armstrong digit from 100 to 999: \n");

    for(i = 100 ; i <= 999; i++) {

        num = i;
        result = 0;

        while(num != 0) {
            remainder = num % 10;
            result += (remainder * remainder * remainder);
            num = num / 10;
        }

        if(result == i) {
            printf("%d ", i);
        }
    }

    return 0;
}