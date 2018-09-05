#include <stdio.h>

int main()
{
    int scores[5];
    int max;
    int min;
    int sum = 0;
    for (int i = 0; i <  5; i++)
    {
        printf("请输入第%d个评委的分数\n", i + 1);
        scanf("%d", &scores[i]);
    }
    printf("************************************\n");
    max = scores[0];
    min = scores[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < scores[i])
        {
            max = scores[i];
        }
        if (min > scores[i])
        {
            min = scores[i];
        }
        sum += scores[i];
    }
    float avg = (sum - max - min) / 3.0;
    printf("最高分：%d，\n最低分:%d，\n平均分：%f\n", max, min, avg);
    return 0;
}
