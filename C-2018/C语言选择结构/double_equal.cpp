#include <stdio.h>

int main()
{
    double a = 100.0657488;
    double b = 100.0657488;
    printf("%f %f\n", a, b);
    printf("%d\n", a - b == 0); // 对浮点类型的值 进行相等判断 不要用a == b的形式，而应用a - b == 0的形式
    return 0;
}
