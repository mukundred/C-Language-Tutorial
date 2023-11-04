#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE* ptr;
ptr = fopen("test.txt", "w");
char str[100] = "Hello World\nA new text has been added to\n test.txt file.";
fputs(str,ptr);
while(fgets(str,100,ptr)!= NULL){
    printf("%s\n", str);
}
fclose(ptr);
return 0;
}