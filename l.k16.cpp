#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if ((num % 2 == 0) && (num % 5 == 0) && (num % 8 != 0)) {
        printf("%d is divisible by both 2 and 5, but not by 8.\n", num);
    } else {
        printf("%d does not meet the specified conditions.\n", num);
    }
    return 0;
}