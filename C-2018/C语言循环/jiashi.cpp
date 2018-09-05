#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j == 10)
            {
                printf("%d + %d = 10\t", i, j);
            }
        }
    }
    return 0;
}
