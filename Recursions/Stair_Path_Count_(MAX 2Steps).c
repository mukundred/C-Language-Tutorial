#include<stdio.h>
int star(int n){
    if(n == 1 || n == 2){
        return n;
    }
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}
int main()
{
int n;
printf("Enter a Number of rows : ");
scanf("%d", &n);
printf("%d", stair(n));
return 0;
}