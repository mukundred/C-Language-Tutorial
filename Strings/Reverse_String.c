#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("Enter A String : ");
gets(str);
char rev[100];
int l = strlen(str)-1;
int i = 0;
while(str[i]!='\0'){
    rev[i] = str[l];
    i++;
    l--;
}
rev[i]='\0';
puts("String After Reverse : ");
puts(rev);
return 0;
}