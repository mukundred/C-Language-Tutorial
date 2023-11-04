#include<stdio.h>
int main()
{
int a = sizeof(int);
int n;
scanf("%d", &n);
int* ptr=(int*)malloc(n*sizeof(int));
int arr[n];
ptr = arr[n];
return 0;
}