#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Print asterisks
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Print spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }

        // Print asterisks again
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {
        // Print asterisks
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Print spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }

        // Print asterisks again
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}