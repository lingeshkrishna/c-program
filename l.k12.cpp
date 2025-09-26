#include <stdio.h>
int main() {
    int number;
    int lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    lastDigit = number % 10;
    if (lastDigit < 0) {
        lastDigit = -lastDigit; 
    }
    if (lastDigit % 2 == 0) {
        printf("The last digit (%d) of %d is even.\n", lastDigit, number);
    } else {
        printf("The last digit (%d) of %d is odd.\n", lastDigit, number);
    }

    return 0;
}