#include <stdio.h>

int main()
{
    int score[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("请输入第%d个学生的第%d门成绩\n", i + 1, j + 1);
            scanf("%d", &score[i][j]);
        }
    }
    printf("学号\t语言\t计算机\t英文\t总成绩\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", i + 1);
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", score[i][j]);
            sum += score[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
