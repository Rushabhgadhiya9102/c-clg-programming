#include <stdio.h>

int main() {

    int i, j, result, n = 1;
    for(i = n; i <= 10; i++) {
        for(j = 1; j <= 10; j++) {
            result = n * j;
            printf("%d x %d = %d\n", i, j, result);
        }
        printf("\n");
    }

    return 0;
}