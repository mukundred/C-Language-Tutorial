#include <stdio.h>
#include <string.h>

struct book
{
    char name[100];
    int price;
    int noOfpages;
} book1;
int main()
{
    printf("Enter Name Of Book : ");
    gets(book1.name);
    printf("Enter Price : ");
    scanf("%d", &book1.price);
    printf("Enter Number Of Pages : ");
    scanf("%d", &book1.noOfpages);

    printf("---------------\n");
    printf("Check the Details\n");
    printf("Name Of Book : %s", book1.name);
    printf("Number Of Pages in Book : %d\n", book1.noOfpages);
    printf("Price of Book : %d", book1.price);
    return 0;
}