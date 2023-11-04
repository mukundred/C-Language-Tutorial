#include<stdio.h>
#include<stdbool.h> //Booling Operator(0,1)
int main()
{

int x=10, y =20;
bool res = (x>0 && x < 10);
printf("%d\n", res); // 0, False

res = (x > 0 || x > y);
printf("%d\n", res); // 1, True

res = !res;
printf("%d\n", res); // 0, NOT operator

return 0;
}
/*
If first output in AND Operator is false it's not going
to evaluate the second output

example
int x = 5;
bool res = (x++ && x>10);
here x will become 6 
bool res = (x > 10 && x++);
here the output will also be 0 but x will remain 5.
*/
// Same Thing Happens for OR Operator ||