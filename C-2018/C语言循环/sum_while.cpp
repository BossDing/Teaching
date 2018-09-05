#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0;
    while (num <= 100)
    {
        sum += num++;
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n", sum);
    return 0;
}
