#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // You need to use & to get the address of 'n' in scanf

  int ans = (n*(n+1))/2;
  printf("%d", ans);
    return 0;
}
