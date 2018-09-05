#include <stdio.h>

float test();
int sum();

int main()
{
    printf("%f\n", test());
    printf("%d\n", sum());
    return 0;
}

float test()
{
    int num;
    printf("请输入一个整数：\n");
    scanf("%d", &num);
    if (num > 50)
    {
        printf("数字大于50\n");
        return 5.6;
    }
    printf("****************************\n");
    if (num <= 50)
    {
        printf("数字不大于50\n");
        return 1.0;
    }
}

int sum()
{
    return 10 + 5;
}
