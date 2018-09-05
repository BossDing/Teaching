#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 9)
        {
            break;
        }
    }

    printf("\n***********************************\n");

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (i % j == 1)
            {
                printf("%d, %d\n", i, j);
                break;
            }
        }
    }

    return 0;
}
