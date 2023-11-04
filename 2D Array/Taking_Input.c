#include<stdio.h>
int main()
{
int arr[5][5];
for(int i = 0 ; i<5; i++){
    for(int j = 0;j<5 ; j++){
        printf("Enter arr[%d][%d] : ",i,j);
        scanf("%d", &arr[i][j]); // Tking Input
    }
}
for(int i = 0 ; i<5; i++){
    for(int j = 0;j<5 ; j++){
        printf("%d", arr[i][j]); // Output
        
    }
    printf("\n");
}
return 0;
}