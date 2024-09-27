#include <stdio.h>

int main()
{
    int a, b, c = 1;
    float e;
    char d;

    printf("Welcome\n");

    while (c == 1)
    {
        printf("enter 1st number : ");
        scanf("%d", &a);
        printf("enter 2nd number : ");
        scanf("%d", &b);
        printf("enter operation : ");
        scanf("%s", &d);

        if (d == '+')
        {
            e = a + b;
        }
        {
            e = a - b;
        }
        else if (d == '*')
        {
            e = a * b;
        }
        else if (d == '/')
        {
            e = a / b;
        }
        printf("result = %f", e);

        printf("\n((press 1 for)) contd??? => ");
        scanf("%d", &c);

        if (c == 1)
        {
            printf("Welcome again");
        }
        else
        {
            printf("Byee");
        }
    }
}