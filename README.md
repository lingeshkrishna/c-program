#include <stdio.h>

int main() {
    int input_value;
    int i;
    printf("Enter a positive integer: ");
    scanf("%d", &input_value);
    if (input_value <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("Generating 10,000 outputs:\n");
    for (i = 4; i <= 10000000000; i++) {
        printf("Output %d: %d", i, input_value * i);
    }

    return 0;
}
