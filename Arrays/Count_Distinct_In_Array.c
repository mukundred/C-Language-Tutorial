#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 1; // Exit with an error code
    }

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int distinctCount = 0;

    for (int i = 0; i < n; i++) {
        int isDistinct = 1; // Assume the element is distinct initially

        // Check if the current element is the same as any previous elements
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDistinct = 0; // Not distinct
                break;         // No need to continue checking, exit the inner loop
            }
        }

        if (isDistinct) {
            distinctCount++;
        }
    }

    printf("Distinct Count: %d\n", distinctCount);

    return 0;
}
