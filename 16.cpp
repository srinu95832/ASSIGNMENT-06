#include <stdio.h>

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n, fib;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Fibonacci number is not defined for negative integers.\n");
    }
    else {
        fib = fibonacci(n);
        printf("The %dth Fibonacci number is %d.\n", n, fib);
    }
    return 0;
}
