#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {
    int n, fact;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Factorial is not defined for negative integers.\n");
    }
    else {
        fact = factorial(n);
        printf("The factorial of %d is %d.\n", n, fact);
    }
    return 0;
}
