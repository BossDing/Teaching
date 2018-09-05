#include "stdio.h"
void main()
{
    // 使用sizeof来获取某个变量类型所占用的字节数
    int a = 10;
    printf("%d\n", sizeof(char)); // 1个字节
    printf("%d\n", sizeof(long)); // 4个字节
    printf("%d\n", sizeof(a));
}