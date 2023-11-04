#include<stdio.h>
int main()
{
char arr[11] = "Hello World";
int i = 0;
while(i<11){
    printf("%c", arr[i]);
    i++;
}
char str[] = {'h','e','l','l','o','\0'};
return 0;
}