#include <stdio.h>

int oushu()
{
    int num;
    printf("请输入一个数\n");
    scanf("%d", &num);
    int a = 1;
    if (num % 2 == 0)
    {
       a = 0;
    }
    return a;
}

int main()
{
    printf("%d", oushu());
    return 0;
}
