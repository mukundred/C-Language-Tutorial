#include<stdio.h>
void fun(int arr[]){
arr[0] = arr[1]; // Pass By Reference. 
return ;
}
int main()
{
int arr[5] ={1,2,3,4,5};
printf("%d\n", arr[1]);
fun(arr); // Poora ka Poora array transfer hota hai.
printf("%d\n", arr[1]);
return 0;
}