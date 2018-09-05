#include <stdio.h>

int main()
{
    int score;
    char grade;
    printf("请输入分数值\n");
    scanf("%d", &score);
    printf("使用if判断\n");
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80 && score < 90)
    {
        grade = 'B';
    }
    else if (score >= 70 && score < 80)
    {
        grade = 'C';
    }
    else if (score >= 60 && score < 70)
    {

        grade = 'D';
    }
    else {
        grade = 'E';
    }
    printf("成绩等级：%c\n", grade);
    printf("使用switch语句\n");
    switch (score / 10)
    {
        case 9:
        case 10: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'E'; break;
    }
    printf("成绩等级：%c\n", grade);
}
