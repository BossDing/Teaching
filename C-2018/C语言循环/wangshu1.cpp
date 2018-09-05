#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 10000; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            sum += i % j == 0 ? j : 0;
        }
        if (sum == i)
        {
            count++;
            printf("%d\t", i);
        }
    }
    printf("\n共%d个完数\n", count);
    return 0;
}
