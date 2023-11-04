#include<stdio.h>
int main()
{
void fun(); // If we use it like this Then we can
            // write the function anywhere !!
fun();
return 0;
}
void fun(){
   printf("Hello !!");
}