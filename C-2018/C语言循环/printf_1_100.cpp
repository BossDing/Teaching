#include <stdio.h>

/**
    请输出 1-100 的值

    1、定义一个变量，赋值为1
    2、打印第一步中定义的变量
    3、变量自增
    4、如果while部分条件成立，则继续执行do语句块
        如果while部分条件不成立，则不会继续执行do语句块（结束循环）

    do...while的结构
        1、初始化表达式（控制循环的开始），do...while结构的外部
        2、条件表达式（控制循环的结束）   while
        3、增量表达式，循环体

        注意事项：
            1）一定先执行do循环体部分，然后再进行while条件判断
            2）do循环体至少执行一次

*/
int main()
{
    int num = 1;
    do
    {
        printf("%d\n", num);
        printf("%d\n", num + 5);
        num++;
    } while (0);
    return 0;
}
