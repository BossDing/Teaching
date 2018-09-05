#include <stdio.h>

int main()
{
    int num;
    int jie = 1;
    printf("请输入整数\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        jie *= i;
    }
    printf("%d", jie);
}
