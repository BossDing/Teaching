#include <stdio.h>

int main()
{
    int a = 10;
    switch (a)
    {
        case 1:printf("1\n");break;
        case 2:printf("2\n");break;
        case 10:printf("10\n");break;
        case 11:printf("11\n");break;
        default:printf("查无此车\n");break; // 默认的，以上所有case都不匹配
    }
    // 输出10
    return 0;
}
