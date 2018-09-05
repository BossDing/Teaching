#include <stdio.h>

int main()
{
    int a = 10;
    int *b = &a;
    printf("%d\n", b); // 输出地址
    printf("%d\n", *b); // 输出地址上对应的内容
    return 0;
}
