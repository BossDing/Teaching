#include <stdio.h>

#define PI 3.14 // 全局的常量

int count = 0; // 全局变量

int visit1()
{
    count++;
    return 0;
}

int visit2()
{
    count++;
    return 0;
}

int visit3()
{
    count++;
    return 0;
}

int visit4()
{
    int count = 0;
    count++; // 此时使用的是局部变量count，不会去使用全局变量count
    return 0;
}

int main()
{
    visit1();
    visit2();
    visit3();
    printf("%d\n", PI); // #define定义的常量，在使用的过程，仅仅是把常量的值 覆盖掉PI   printf("%d\n", 3.14);
    printf("%d\n", PI * 10 * 10); // printf("%d\n", 3.14 * 10 * 10);
    printf("%d\n", count);

}
