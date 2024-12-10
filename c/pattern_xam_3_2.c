#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// printf("enter number of col: ");
// scanf("%d", &c);

/*
i want to make this pattern
oooooooooo
oooo  oooo
ooo    ooo
oo      oo
o        o
o        o
oo      oo
ooo    ooo
oooo  oooo
oooooooooo
*/
int main()
{
    int i, j, k;
    int r;

    printf("enter number of rows: ");
    scanf("%d", &r);
    if (r % 2 != 0)
    {
        printf("Pattern can't be possible with odd number of rows\n");
        Sleep(200);
        printf("Quitting");
        {
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
        }
        exit(0);
    }

    for (i = 0; i < r; i++)
    {
        printf("%d\t", i);
        for (j = 0; j < r; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == r - 1)
                printf("o");

            else if (j < (r / 2) - i || j > (r / 2) + i - 1)
                printf("o");

            else if (j < i - (r / 2) + 1 || j > r + ((r/2)-2) - i)
                printf("o");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}