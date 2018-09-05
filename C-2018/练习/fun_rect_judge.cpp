#include <stdio.h>

int judge_rect(int width, int height)
{
    int result = 0;
    if (width > 0 && height > 0)
    {
        if ((width == height))
        {
            result = 1;
        }
    }
    else
    {
        result = -1;
    }
    return result;
}

int main()
{
    int result = judge_rect(10, 10);
    if (result == 1)
    {
        printf("正方形\n");
    }
    else if (result == 0)
    {
        printf("不是正方形\n");
    }
    else if (result == -1)
    {
        printf("非法数据\n");
    }
    return 0;
}
