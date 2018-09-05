#include <stdio.h>

int main()
{
    int month;
    printf("请输入月份\n");
    scanf("%d", &month);
    /**
        month = 5;
        5 1 NO
        5 3 NO
        5 5 YES 没有break
        5 7 NO
        5 8 NO
        5 10 NO
        5 12 NO 输出31days，有break，匹配结束

        month = 6;
        6 1 NO
        6 3 No
        6 12 NO
        6 4 No
        6 6 YES
        6 9 NO
        6 11 NO 输出30days，有break，匹配结束
    */
    switch (month)
    {
        case 1:
        case 3:printf("3\n");
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31 days");break;
        case 4:
        case 6:
        case 9:
        case 11: printf("30 days");break;
        case 2: printf("28 or 29 days");break;
        default:printf("月份只能是1-12");break;
    }
    return 0;
}
