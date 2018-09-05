#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0;
    do
    {
        sum += num++;
        // sum = sum + num;
        // num++;
    } while (num <= 100);
    printf("1 + 2 + 3 + ... + 100 = %d\n", sum);
    return 0;
}
