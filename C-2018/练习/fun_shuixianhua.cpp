#include <stdio.h>
#include <math.h>

int shuixianhua(int num)
{
    int result = 0;
    int bai = num / 100;
    int shi = num / 10 % 10;
    int ge = num % 10;
    if ((int)(pow(bai, 3) + pow(shi, 3) + pow(ge, 3)) == num)
    {
        result = 1;
    }
    return result;
}

int main()
{
    int result = shuixianhua(153);
    printf("%d\n", result);
    return 0;
}
