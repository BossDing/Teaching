#include <stdio.h>

int main()
{
    int circle = 1;
    int raining = 1;
    do
    {
        printf("正在跑第%d圈\n", circle++);
    } while (circle <= 10 && !raining);
    return 0;
}
