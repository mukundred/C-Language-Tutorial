#include<stdio.h>
int main()
{
int a, b;
printf("Enter First Number: ");
scanf("%d", &a);

printf("Enter Second Number: ");
scanf("%d", &b);

printf("\n");

int temp;
temp=a;
a=b;
b=temp;

printf("Now your first Number is : %d\n",a);
printf("And the second Number is : %d\n", b);

return 0;
}