#include <stdio.h>

int main() {
    int a, b, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calculate sum
    sum = a + b;

    // Display result
    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
