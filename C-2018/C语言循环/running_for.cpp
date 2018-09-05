#include <stdio.h>
#include <windows.h>

int main()
{
    int total_circle = 0;
    printf("请输入圈数\n");
    scanf("%d", &total_circle);
    if (total_circle <= 0 || total_circle > 20)
    {
        printf("不跑啦\n");
    }
    else
    {
        for (int i = 1; i <= total_circle; i++)
        {
            printf("正在跑第%d圈\n", i);
            Sleep(3000); // 单位为ms 1s = 1000 ms
        }
    }
    return 0;
}
