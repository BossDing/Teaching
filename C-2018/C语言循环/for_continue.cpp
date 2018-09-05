#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            continue; // 跳过continue后面的所有代码，直接进入到下一次循环
        }
        printf("%d\t", i);
        printf("*");
    }
    return 0;
}
