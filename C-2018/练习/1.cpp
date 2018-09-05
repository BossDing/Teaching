#include <stdio.h>

int main()
{
    int num;
    char q = 'a';
    while (q != 'n')
    {
        printf("请输入整数：\n");
        scanf("%d", &num);
        if (num % 5 == 0 && num % 7 ==0)
        {
            printf("是\n");
        }
        else
        {
            printf("不是\n");
        }
        printf("是否继续，按n结束\n");
        fflush(stdin);
        scanf("%c", &q);
    }
    return 0;
}
