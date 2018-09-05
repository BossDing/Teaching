#include <stdio.h>

int main()
{
    int year = 1900;
    int count = 0;
    while (year <= 2100)
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
        year++;
    }
    printf("\n共%d个闰年\n", count);
    return 0;
}
