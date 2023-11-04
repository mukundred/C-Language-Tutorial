// A Sorted Array is in which all the elements are written in increasing order
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sorted = 1; // Initialize a flag variable as true (sorted)

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sorted = 0; // If not sorted, set the flag to false
            break;      // No need to continue checking, exit the loop
        }
    }

    if (sorted) {
        printf("Sorted\n");
    } else {
        printf("False\n");
    }

    return 0;
}
