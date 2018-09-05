#include <stdio.h>

int main()
{
    int circle = 1;
    int raining = 0;
    if (raining)
    {
        printf("不用跑步啦……");
    }
    else
    {
        do
        {
            printf("正在跑第%d圈\n", circle++);
        } while (circle <= 10);
    }
    return 0;
}
