#include <stdio.h>
int main()
{
    int a, b = 2, p = 0;
    printf("enter a number : ");
    scanf("%d", &a);

    while (a > b)
    {
        if (a % b == 0)
        {
            p = 1;
            break;
        }
        else
        {
            p = 0;
        }
        b++;
    }
    if (a==0 || a==1)
    {
        printf("a is neither prime nor composite");
    }
    else if (a==2)
    {
        printf("a is prime");
    }
    
    else if (p == 0)
    {
        printf("a is prime");
    }

    else
    {
        printf("a is composite");
    }
}