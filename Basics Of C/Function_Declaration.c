#include<stdio.h>
int getMax(int x, int y); // Declaration Or Prototype
int main()
{
int x,y;
printf("Enter 'x' :  ");
scanf("%d", &x);
printf("Enter 'y' : ");
scanf("%d", &y);

printf("%d", getMax(x,y));
return 0;
}
int getMax(int x, int y){    /*
                              Definition
                             */

    if (x>y)
    {
        return x;
    }
    else{

        return y;
    }
    
}