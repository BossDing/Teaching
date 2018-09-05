#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("请输入两个数\n");
    scanf("%d %d", &num1, &num2);
    for (int min = num1 <= num2 ? num1 : num2; min >= 1; min--)
    {
        if (num1 % min == 0 && num2 % min == 0)
        {
            printf("最大公约数：%d\n", min);
            break;
        }
    }
    return 0;
}
