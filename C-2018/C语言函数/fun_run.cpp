#include <stdio.h>

void run()
{
    int i = 0;
    while (i < 5)
    {
        printf("正在跑第%d圈\n", i + 1);
        i++;
    }
}

int main()
{
    run();
    return 0;
}
