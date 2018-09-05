#include <stdio.h>

void test(int a) // test(10)   int a = 10;
{
    a = 20;
    printf("test函数内部的：%d\n", a); // 20
}

void test1(int a[]) // int a[] 接收的是内存空间的首地址
{
    a[0] = 20;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]); // 20 20  30  40  50
    }
}

void test2(int *a)
{
    *a = 20;
}

void test3(char *c) // 此种接收方式，会新分配内存空间来接收字符串
{
    c = "fdskfjdslkfj";
    printf("内部：%s\n", c);
}

void test4(char c[])
{
    c[0] = 'A';
    printf("内部：%s\n", c);
}

int main()
{
    int a = 10;
    test(a); // 把变量a的值传递给test函数中的形参a，此时的形参a的值是10
    printf("main函数里的：%d\n", a); // 10

    int b[] = {10, 20, 30, 40, 50};
    test1(b); // 数组名等于数组的首地址
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]); // 20 20  30  40  50
    }
    printf("\n");

    test2(&a); // 把变量a的地址传递给*a
    printf("%d\n", a);

    char *c = "abcdef"; // 编译完后，与数组的使用方式一样
    test3(c);
    printf("%c\n", c[0]); // 像数组一样去使用*号定义的字符串
    printf("外部：%s\n", c);
    char d[] = "abcdef";
    test4(d);
    printf("外部：%s\n", d);
    return 0;
}
