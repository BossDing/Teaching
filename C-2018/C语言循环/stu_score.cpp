#include <stdio.h>

int main()
{
    int score = 0;
    int max_score = 0;
    int min_score = 100;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第%d个学生成绩\n", i + 1);
        scanf("%d", &score);
        if (score > max_score)
        {
            max_score = score;
        }
        if (score < min_score)
        {
            min_score = score;
        }
        sum += score;
    }
    printf("max score = %d, min score = %d, average = %.2f\n", max_score, min_score, sum / 5.0);
    return 0;
}
