#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 2 == 1) {
            printf("%d\t", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}
