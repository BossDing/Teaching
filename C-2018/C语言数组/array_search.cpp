#include <stdio.h>

int main()
{
    int ary[] = {49, 89, 63, 81, 30};
    int num = 63;
    int index = -1; // 用来记录查找到的元素的索引
    for (int i = 0; i < 5; i++)
    {
        if (ary[i] == num)
        {
            index = i;
            break;
        }
    }
    if (index >= 0)
    {
        printf("找到了元素，其在数组中的索引:%d\n", index);
    }
    else
    {
        printf("没有需要查找的元素！\n");
    }
}
