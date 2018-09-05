#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    if (n >= 1)
    {
        for (int i = 1; i <=n; i++)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n = -9;
    int s = sum(n);
    if (s == 0)
    {
        printf("输入正整数\n");
    }
    else
    {
        printf("1 + 2 + 3 + ... + %d = %d\n", n, s);
    }
    int s1 = sum(n);
    if (s1 == 0)
    {
        printf("输入大于0的整数\n");
    }
    else
    {
        printf("1 + 2 + 3 + ... + %d = %d\n", n, s1);
    }
    return 0;
}
