#include <stdio.h>

// Without recursion (iterative)
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// With recursion
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (n > 20) {
        printf("Number too large: the result overflows unsigned long long (max n is 20).\n");
        return 1;
    }

    printf("Factorial of %d without recursion = %llu\n", n, factorial_iterative(n));
    printf("Factorial of %d with recursion    = %llu\n", n, factorial_recursive(n));

    return 0;
}
