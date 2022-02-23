#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int number = 0;
    int step = 0;

    if (argc < 2 || argc > 1) {
        printf("Invalid parameter given. Please insert an integer: ");
        scanf("%d", &number);

        if (number < 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    else {
        number = atoi(argv[1]);
    }

    while (number != 1) {
        if (number % 2 == 0) {
            printf("%d is even, dividing it by 2.\n", number);
            number = number / 2;
        }
        else {
            printf("%d is odd, multiplying it by 3 and adding 1.\n", number);
            number = 3 * number + 1;
        }
        step++;
    }

    printf("\n\nWe reached 1 in %d steps!\n", step);

    return 0;
}
