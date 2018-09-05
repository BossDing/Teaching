#include <stdio.h>

int max()
{
    int a = 10, b = 5;
    int c = a > b ? a : b;
    return c;
}

int main()
{
    int a = max(); // 可以定义变量来接收一个函数的返回值
    printf("%d\n", a);
    return 0;
}
