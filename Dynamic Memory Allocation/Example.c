#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter Number Of Integers you want : ");
    scanf("%d", &n);
    int* ptr=(int*)malloc(n*sizeof(int));
    int* p = ptr;
    int* t=p;
    for(int i=1;i<-n;i++){
        scanf("%d", &(*ptr));
        ptr++; 
    }
       for(int i=1;i<n;i++){
        printf("%d ", (*p));
        p++; 
    }

return 0;
}