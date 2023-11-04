#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // num is divisible by i, so it's not prime
    }
    return 1;  // num is prime
}

void primeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) == 1) {
            while (n % i == 0) {
                printf("%d ", i);
                n = n / i;
            }
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}
