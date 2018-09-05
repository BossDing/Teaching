#include <stdio.h>

int main()
{
    int width;
    int height;
    printf("请输入矩形的宽和高\n");
    scanf("%d %d", &width, &height);
    if (width > 0 && height > 0)
    {
        printf("矩形的面积为：%d\n", width * height);
    }
    else
    {
        printf("宽和高必须是正数！");
    }
    return 0;
}
