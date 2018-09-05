#include <stdio.h>

int main()
{

    int a[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        printf("请输入第%d月的收入\n", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("月份\t收入\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%d\t%d\n", i + 1, a[i]);
    }
    printf("总收入：%d\t平均月收入%.2f\n", sum, sum / 12.0);

}
