#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter String : ");
    gets(str);
    int n;
    printf("Enter Index You Want To Enter : ");
    scanf("%d", &n);
     while ((getchar()) != '\n');  // Clear the input buffer
    char c;
    printf("Enter Character : ");
    scanf("%c", &c);
     int len = strlen(str);

    if (n < 0 || n > len) {
        printf("Invalid index. Index should be between 0 and the length of the string.\n");
        return 1;
    }

    for(int i = len; i>=n;i--){
        str[i+1] = str[i];

    }
    str[n] = c;

    printf("%s", str);
return 0;
}