#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

// Function to sum numbers from 1 to n
int sum_up_to(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    // Use a default number instead of interactive input
    int number = 5;

    printf("Using default number: %d\n", number);

    int fact = factorial(number);
    int sum = sum_up_to(number);

    printf("Factorial of %d is: %d\n", number, fact);
    printf("Sum of numbers from 1 to %d is: %d\n", number, sum);

    printf("Counting down from %d to 1:\n", number);
    for (int i = number; i >= 1; i--)
        printf("%d ", i);
    printf("\n");

    return 0;
}
