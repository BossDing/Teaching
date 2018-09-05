#include <stdio.h>

int max(int a, char c)
{
    return a > c ? a : c;
}

int max_1(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    printf("%d\n", max(65, 'B'));
    int num1, num2, num3;
    printf("请输入三个整数\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d\n", max_1(num1, num2, num3));
    return 0;
}
