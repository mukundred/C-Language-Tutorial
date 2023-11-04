//Width
#include<stdio.h>
int main()
{
int x = 124;
char y[] = "Ct";
float z = 1.23;

printf("%-5d %-6s %.2f", x,y,z);
printf("%05d\n", x);
printf("%+5d\n",x);
return 0;
}

//Precision
#include<stdio.h>
int main()
{
char x[]="HelloWorld";
printf("%.4s\n", x);
printf("%5.3s\n",x);
printf("%*.*s\n", x);
printf("%-5.3s\n", x);

return 0;
}