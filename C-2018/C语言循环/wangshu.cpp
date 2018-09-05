#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    printf("请输入整数\n");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("这是一个完数");
    }
    else
    {
        printf("这不是一个完数");
    }
    return 0;
}
