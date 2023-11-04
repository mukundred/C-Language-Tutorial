#include <stdio.h>
int main()
{
    int x = 0, y = 0;
    printf("Enter Your Choice : ");
    char c;
    scanf("%c", &c);
    switch (c)
    {
    case 'L': // Player Moves Left
        x--;
        break;
    case 'R': // Player Moves Right
        x++;
        break;
    case 'U': // Players Moves Up
        y++;
        break;
    case 'D': // Players Moves Down
        y--;
        break;
    default: // Players Enters A Invalid Move
        printf("Enter A Valid Move !!\n");
        break;
    }

    printf("%d %d", x, y);
    return 0;
}

/*
This Code can be written with if else statements too !!
*/