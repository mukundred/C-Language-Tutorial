#include<stdio.h>
int main()
{
printf("Hi, \n");

printf("Welcome to \"Earth\"");
/*
printf("Welcome to "Earth"");  This code will show error because according to compiler the line will end at ".
*/
return 0;
}

//Anothe Example
#include<stdio.h>
int main()
// In first one you are going to find a WARNING
{

//printf("Printing \"); 

printf("Printing \\"); // Here the second backslash tells the compiler to printf first backslash
// Output : Printing /


return 0;
}