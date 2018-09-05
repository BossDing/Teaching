#include <stdio.h>

int sum()
{
    int score;
    int sum = 0;
    printf("请输入5个学生的成绩\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &score);
        sum += score;
    }
    return sum;
}

int main()
{
    printf("%d\n", sum());
    return 0;
}
