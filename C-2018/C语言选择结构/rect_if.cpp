#include <stdio.h>

int main()
{
    int width;
    int height;
    printf("请输入长和宽，用空格隔开\n");
    scanf("%d %d", &width, &height);
    if (width == height)
    {
        printf("这是一个正方形\n");
    }
    return 0;
}
