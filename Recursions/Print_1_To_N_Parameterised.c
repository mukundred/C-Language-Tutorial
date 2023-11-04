#include<stdio.h>
void sum(int n, int s){
     if(n==0){ // Base Call
        printf("%d", s);
        return ;
     }

     sum(n-1,s+n); // Parameterised
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    sum(n,0); // Function Call

return 0;
}