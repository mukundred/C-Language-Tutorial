#include <stdio.h>
// 0123
// 0123
// 0123
// 0123

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    { // Rows
        for (int j = 0; j < n; j++)
        { // Coloumns
            printf("%d", j);
        }
    }
    return 0;
}