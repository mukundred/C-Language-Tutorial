#include<string.h>
#include<stdio.h>
int main()
{
// gets() & puts();
char str[] = "Hello Mukund";
char arr[100];
scanf("%s", arr); // Only The Word will be considered
// Space ke aage consider nahi hota
scanf("%[^\n]s", arr); // Consider space
gets(arr); // pura statement leta hai
printf("%s\n", str);
puts(str); // Only Print Strings
puts(arr);
printf("%s", arr);
puts(arr);
return 0;
}