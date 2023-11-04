#include<stdio.h>
int main()
{
int *ptr = NULL; // Helps if the pointer is not initalized.
// Programme might crash
if(ptr !=NULL){
 printf("%d", ptr);
}
// int *ptr = 10; (ERROR)

return 0;
}