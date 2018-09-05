#include <stdio.h>

/*
计算某年是否为闰年
*/
int main()
{
    int year;
    printf("请输入年\n");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("这是闰年\n");
    }
    else
    {
        printf("这是平年\n");
    }
    return 0;
}
