#include <stdio.h>

int main()
{
    int kk[10], i, j, a;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &kk[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (kk[i] > kk[j])
            {
                a = kk[i];
                kk[i] = kk[j];
                kk[j] = a;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d, ", kk[i]);
    }

    return 0;
}