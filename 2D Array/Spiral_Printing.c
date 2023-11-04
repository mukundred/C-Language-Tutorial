#include <stdio.h>

int main() {
    int m;
    printf("Enter Number of Rows: ");
    scanf("%d", &m);
    int n;
    printf("Enter Number Of Columns: ");
    scanf("%d", &n);
    int arr[m][n];
    
    printf("Enter Matrix Elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Spiral Print
    printf("\n");
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n;
    int count = 0;
    
    while (count < tne) {
        // Print Minimum Row
        for (int i = minc; i <= maxc; i++) {
            printf("%d ", arr[minr][i]);
            count++;
        }
        minr++;
        
        // Print Max Column
        for (int i = minr; i <= maxr; i++) {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        
        // Print Max Row
        for (int i = maxc; i >= minc; i--) {
            printf("%d ", arr[maxr][i]);
            count++;
        }
        maxr--;
        
        // Print Min Column
        for (int i = maxr; i >= minr; i--) {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }
    
    return 0;
}
