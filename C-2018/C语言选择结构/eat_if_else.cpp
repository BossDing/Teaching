#include <stdio.h>

int main()
{
    float money;
    printf("请输入金额\n");
    scanf("%f", &money);
    if (money <= 0)
    {
        printf("去吃土吧！");
    }
    else if (money > 0 && money <= 20)
    {
        printf("买泡面\n");
    }
    else if (money > 20 && money <= 50)
    {
        printf("来一份KFC全家桶\n");
    }
    else if (money > 50 && money <= 100)
    {
        printf("pizza!!!");
    }
    else
    {
        printf("去存钱！");
    }
    return 0;
}
