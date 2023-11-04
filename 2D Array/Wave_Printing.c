// 1 2 3
// 4 5 6
// 7 8 9

// Output

// 1 2 3 
//6 5 4 
//7 8 9
#include <stdio.h>
int main()
{
    int m;
    printf("Enter Number of Row : ");
    scanf("%d", &m);
    int n;
    printf("Enter Number Of Coloumn : ");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Wave Print
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
           
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
            
        }
        printf("\n");
    }
    return 0;
}