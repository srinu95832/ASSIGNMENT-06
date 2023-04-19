#include <stdio.h>

void fibonacci(int n) {
    int fib_sequence[n], i;
    fib_sequence[0] = 0;
    fib_sequence[1] = 1;
    for(i = 2; i < n; i++) {
        fib_sequence[i] = fib_sequence[i-1] + fib_sequence[i-2];
    }
    for(i = 0; i < n; i++) {
        printf("%d ", fib_sequence[i]);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d Fibonacci numbers are: ", n);
    fibonacci(n);
    return 0;
}
