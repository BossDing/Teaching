#include "stdio.h"
void main()
{
    int a = 10;
    long b = a; // 隐式转换，由程序自动完成
    long c = 10000;
    int d = (int) c; // 显式转换，强制转换，由开发者写代码
    double e = 10.5;
    int f = e;
    printf("%ld\n", b);
    printf("%d\n", d);
    printf("%d\n", f);
}