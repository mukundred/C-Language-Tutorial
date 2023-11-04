#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
   // if(b == 1) return a;
    if(b%2==0){ //Even Power
        return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else{ // Odd Power
        return powerlog(a,b/2)*powerlog(a,b/2)*a;
    }
}
int main()
{
int a,b;
printf("Enter Base : ");
scanf("%d", &a);
printf("Enter Power : ");
scanf("%d", &b);

printf("%d", powerLog(a,b));
return 0;
}