#include <stdio.h>

int main()
{
    int sum = 0;
    for (int num = 1; num <= 100; num++)
    {
        sum += num;
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n", sum);
    return 0;
}
