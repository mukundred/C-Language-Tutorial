#include<stdio.h>
int x = 10;// This is a global variableint x =10;
/*
If you don't initialize this value you get 0 as output
*/
int main()
{
int y = 10; // This is a local variable
/*
if you don't initialize this value you get a random generated number.
*/


printf("%d", x);
return 0;
}

// A funny way to use GLOBAL Variable is that we can initialize the value after the programme(return 0;)
//EXAMPLE
#include<stdio.h>
extern x; // Remeber you have to use extern as it helps the compiler knwo about the variable x
/*
Here exter stands for external linkage.
*/
int main(){
    printf("%d", x);
    return 0;
}
int x = 10;

// If Local and Global Variable have the same name
#include<stdio.h>
int x = 20;// Global
int main()
{
int x = 10; // Local

printf("%d", x);
// The Output will be 10 
// because the new value of x is stored as 10
return 0;
}


//Another Example
//A pair of curly brackets creates a scope
#include<stdio.h>
int x = 20;// Global 
int main()
{
int x = 10; // Local 
// Outer Scope
{
    int x = 30;// Inner Scope
printf("%d", x);
// Here The output will be 30.
}
return 0;
}