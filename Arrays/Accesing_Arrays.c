#include<stdio.h>
int main()
{
int arr[]= {10,20,30,40};
printf("%d %d\n", arr[2], arr[0]); // Accesing arr[2], arr[0]
arr[2]=50; // Assigning New Value to arr[2]
printf("%d %d\n", arr[2], arr[0]); //Printing New Value Of arr[2], arr[0]
return 0;
}