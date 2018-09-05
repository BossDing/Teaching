#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d;
    char e[10];
    printf("%d\n", a);
    printf("%d\n", &a); // 获取a变量在内存中的起始地址
    printf("%d\n", b);
    printf("%d\n", &b);
    printf("%d\n", c);
    printf("%d\n", &c);
    printf("%d\n", d);
    scanf("%s", &e[0]);
    printf("%s\n", e);
    return 0;
}
