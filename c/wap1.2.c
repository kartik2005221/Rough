#include <stdio.h>

int main()
{
    int a, b, c = 1;
    float e;
    char d;

    printf("Welcome by AiR\n");

    while (c == 1)
    {
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("Enter operation: ");
        scanf(" %c", &d);  

        switch (d)
        {
        case '+':
            e = a + b;
            break;
        case '-':
            e = a - b;
            break;
        case '*':
            e = a * b;
            break;
        case '/':
            if (b != 0)
            {
                e = (float)a / b;
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
                continue;
            }
            break;
        default:
            printf("Invalid operation.\n");
            continue;
        }

        printf("Result = %.2f\n", e);  // Use %.2f to print result with 2 decimal places

        printf("\n(Press 1 to continue) => ");
        scanf("%d", &c);

        if (c == 1)
        {
            printf("\nWelcome again\n");
        }
        else
        {
            printf("\nGoodbye!\n");
        }
    }

    return 0;
}
