#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int current_time = (int) time(0); // 获取系统的当前时间，相对于1970-1-1 0：0：0所过去的毫秒值
    srand(current_time); // 给rand函数设置种子
    // srand((int) time(0)); // 等价于上面两行代码
    int des_num = rand() % 100; // 使用rand获取一个随机数
    printf("%d\n", des_num);
    do
    {
       printf("请输入猜测的数字\n");
       scanf("%d", &num);
       if (des_num > num)
       {
           printf("小了！\n");
       }
       else if (des_num < num)
       {
           printf("大了！\n");
       }
       else if (num == des_num)
       {
           printf("恭喜您，猜对了\n");
       }
    } while(num != des_num);

    return 0;
}
