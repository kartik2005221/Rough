#include <stdio.h>

int main()
{
    int a;

    printf("enter a no from 1 to 7 : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("red");
        break;
    case 2:
        printf("orange");
        break;
    case 3:
        printf("yellow");
        break;
    case 4:
        printf("green");
        break;
    case 5:
        printf("blue");
        break;
    case 6:
        printf("indigo");
        break;
    case 7:
        printf("voilet");
        break;

    default:
        printf("invalid no. entered");
        break;
    }

    return 0;
}