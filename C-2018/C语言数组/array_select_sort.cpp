#include <stdio.h>

/**
    选择排序算法
        每一趟比较，只记录最小值的索引，当整趟比较完毕后，只要做一次交换
    从小到大排序
    k为更小值的索引，
    index = 0, 89 k = 0
        index = 1, ary[0]:89 > 56, k = 1
        index = 2, ary[1]:56 > 67,
        index = 3, ary[1]:56 > 12, k = 3
        index = 4, ary[3]:12 > 43,
        index = 5, ary[3]:12 > 9, k = 5
        ary[0]:89 ary[5]:9 exchange {9, 56, 67, 12, 43, 89}

    index = 1, 56 k = 1
        index = 2, ary[1]:56 > 67,
        index = 3, ary[1]:56 > 12, k = 3
        index = 4, ary[3]:12 > 43,
        index = 5, ary[3]:12 > 89,
        ary[1]:56 ary[3]:12 exchange {9, 12, 67, 56, 43, 89}

    index = 2, 67 k = 2
        index = 3, ary[2]:67 > 56, k = 3
        index = 4, ary[3]:56 > 43, k = 4
        index = 5, ary[4]: 43 > 89,
        ary[2]67 ary[4]:43 exchnage {9, 12, 43, 56, 67, 89}

    index = 3, 56 k = 3
        index = 4, ary[3]:56 > 67,
        index = 5, ary[3]:56 > 89
        no exchange {9, 12, 43, 56, 67, 89}
    index = 4, 67 k = 4
        index = 5, ary[4]:67 > 89
        no exchange {9, 12, 43, 56, 67, 89}
*/
int main()
{
    int ary[] = {89, 56, 67, 12, 43, 9};
    /**
        i = 0, k = 0, 89 k = 5; {9, 56, 67, 12, 43, 89}
        i = 1, k = 1, 56 56 > 12 k = 3
                        12 > 43
    */
    for (int i = 0; i < 6; i++)
    {
        int k = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (ary[k] > ary[j])
            {
                k = j; // 记录了更小值的索引
            }
        }
        if (k != i)
        {
            int temp = ary[i];
            ary[i] = ary[k];
            ary[k] = temp;
        }
    }
    printf("排序后：\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ary[i]);
    }
    return 0;
}
