#include <stdio.h>

int main()
{
    int numbers[4]; // 声明
    numbers[0] = 10; // 给索引0赋值
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", numbers[i]);
    }

    printf("********************\n");
    int nums[4] = {10, 20, 30, 40}; // 定义
    for (int j = 0; j < 4; j++)
    {
        printf("%d\n", nums[j]);
    }
    printf("%d\n", nums[4]);

    printf("********************\n");
    int stu[] = {1, 2, 3, 4, 5, 6}; // 省略长度，则初始化中的数据有多少个，则数组长度就是多少
    printf("%d\n", stu[60]);

    printf("********************\n");
    int test[5] = {1, 2, 3};
    printf("%d\n", test[3]); // int默认为0, float和double默认为0.0， char默认为ASCII码中的0，空白符

    printf("********************\n");
    char chars[5] = {'A', 'B', 'C'};
    printf("%c\n", chars[3]);
    return 0;
}
