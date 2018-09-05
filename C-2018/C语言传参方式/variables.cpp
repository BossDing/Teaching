#include <stdio.h>

int test()
{
    int a = 10;
    return 0;
}

int test1()
{
    int a = 20;
    printf("%d\n", a);
    for (int i = 0; i < 5; i++)
    {
        int b = 20; // 只能是for语句块中使用
        printf("%d\n", a);
        printf("%d\t", i);
    }
    if (a > 10)
    {
        int c = 20; // 只能在当前if语句块中使用
    }
    // printf("%d\n", b);
    // printf("%d\n", c);
    return 0;
}

int test2(int aa, int bb)
{
    int c = aa + bb;
    return 0;
}

int main()
{
    int a = 10;
    printf("%d\n", a);
    return 0;
}
