#include <stdio.h>

int main()
{
    int age;
    printf("请输入年龄\n");
    scanf("%d", &age);
    // 非法年龄值
    if (age < 0 || age > 150) {
        printf("请输入0-150的年龄\n");
    }
    // 合法年龄值
    else
    {
        if (age >=18)
        {
            printf("您已经成年了，需要对自己负责了！");
        }
        else
        {
            printf("你还是个小屁孩！给我老实点");
        }
    }
    return 0;
}
