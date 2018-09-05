#include <stdio.h>

#define FEIFANIANLING -1
#define WEICHENGNIAN 0
#define QINGNIAN 1
#define ZHONGNIAN 2
#define LAONIAN 3

int age(int age)
{
    int result;
    if (age < 0 || age > 150)
    {
        result = FEIFANIANLING;
    }
    else
    {
        if (age >= 0 && age <= 18)
        {
            result = WEICHENGNIAN;
        }
        else if (age > 18 && age <= 30)
        {
            result = QINGNIAN;
        }
        else if (age > 30 && age <= 60)
        {
            result = ZHONGNIAN;
        }
        else
        {
            result = LAONIAN;
        }
    }
    return result;
}

int main()
{
    int a = age(-148);
    if (a == FEIFANIANLING)
    {
        printf("非法年龄\n");
    }
    else if (a == WEICHENGNIAN)
    {
        printf("未成年人\n");
        printf("也可以做其他的操作\n");
    }
    else if (a == QINGNIAN)
    {
         printf("青年\n");
    }
    else if (a == ZHONGNIAN)
    {
         printf("中年\n");
    }
    else if (a == LAONIAN)
    {
         printf("老年\n");
    }
    return 0;
}
