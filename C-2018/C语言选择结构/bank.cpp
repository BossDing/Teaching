#include <stdio.h>

#define PASSWORD 10000
#define TOTAL_MONEY 2000

int main()
{
    int pwd;
    int money;
    printf("请输入密码\n");
    scanf("%d", &pwd);
    if (pwd == PASSWORD)
    {
        printf("请输入取款金额\n");
        scanf("%d", &money);
        if (money > 0 && money <= TOTAL_MONEY)
        {
            if (money % 100 == 0)
            {
                printf("成功取款%d元\n", money);
            }
            else
            {
                printf("金额必须是100的整数倍\n");
            }
        }
        else
        {
            printf("余额不足\n");
        }
    }
    else
    {
        printf("密码错误！");
    }
    return 0;
}
