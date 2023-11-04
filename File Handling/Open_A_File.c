#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE* ptr = fopen("Hi.txt", "r"); // Reading the file
char str[50];
while(fgets(str,10,ptr)!= NULL){
    printf("%s\n", str);
}
// Creating a txt file in a code
FILE* xyz = fopen("Hello.txt", "w"); 
// A new file Hello.txt is Created !! 
return 0;
}