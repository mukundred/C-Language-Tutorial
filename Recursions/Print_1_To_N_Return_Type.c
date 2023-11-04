#include<stdio.h>
// Dry Ruun for a better Understanding !!
int sum(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n + sum(n - 1); // Function Calling Itself
}
int main()
{
int n;
printf("Enter Number : ");
scanf("%d", &n);
int x = sum(n);
printf("%d +.... + %d = %d", 1,n,x);
return 0;
}