#include <stdio.h>

int main()
{
    int count = 0;
    for (int year = 2100; year >= 1900; year--)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            printf("%d\t", year);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n共%d个闰年\n", count);
    return 0;
}
