#include<stdio.h>
int add(int a,int b){ // Function
    return a+b; // Return Type
}
int main()
{
int a,b; // Ye a,b alag hai upar waale a,b se
printf("Enter Two Number : ");
scanf("%d %d", &a, &b);
int sum = add(a,b);
printf("Sum : %d", sum);
return 0;
}