#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f\n", sqrt(10.0)); // 求平方根， 结果为浮点类型值
    printf("%f\n", pow(2, 3)); // 求某个数的x次方，2^3，得到的结果是浮点类型值
    printf("%f\n", ceil(5.6));
    printf("%f\n", ceil(5.4)); // ceil函数的作用：大于某个数的最小整数
    printf("%f\n", floor(5.6));
    printf("%f\n", floor(5.4)); // floor函数的作用：小于某个数的最大整数
    printf("%f\n", round(5.6));
    printf("%f\n", round(5.4)); // round函数的作用：四舍五入
    for (int num = 100; num < 1000; num++)
    {
        int bai = num / 100;
        int shi = num % 100 / 10;
        int ge = num % 10;
        if ((int)(pow(bai, 3) + pow(shi, 3) + pow(ge, 3)) == num)
        {
            printf("%d\t", num);
        }
    }
    return 0;
}
