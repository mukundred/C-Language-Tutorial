#include<stdio.h>
#include<string.h>
int main()
{
char str[] = "Hello World !!";
char* ptr = str; // Character Type Ka Pointer
// pointing the first element
int i =0;
while(*ptr != '\0'){
    printf("%c", *ptr);
    ptr++;
    i++;  
}
// Character's Pointer Can Also Be Used to store the address of a string
// Read Only Memory Allocation
// char* ptr = "Hello World"; Valid
// printf("%s", ptr) VALID
// printf("%c", *ptr) VALID But Will only print one character
// But If You do 
// ptr[0] = 'E' It will give error

/*
can modify individual charcater, but not whole string
eg
str[] = "Hello";
str = "Hi";
It willl Give error
*/

/*
but you can modify the whole pointer

*/


return 0;
}