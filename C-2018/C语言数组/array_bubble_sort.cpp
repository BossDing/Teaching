#include <stdio.h>

/**
    冒泡排序算法：
        每一趟的比较，都会把一个最大值或最小值排到前面

    从小到大排序
    index = 0, 89
        index = 1, 89 > 56, exchange 89 56 {56, 89, 67, 12, 43, 9}

        index = 2, 56 > 67, no exchange {56, 89, 67, 12, 43, 9}

        index = 3, 56 > 12, exchange 56 12 {12, 89, 67, 56, 43, 9}

        index = 4, 12 > 43, no exchange {12, 89, 67, 56, 43, 9}

        index = 5, 12 > 9, exchange 12 9 {9, 89, 67, 56, 43, 12}

    index = 1, 89
        index = 2, 89 > 67, exchange 89 67 {9, 67, 89, 56, 43, 12}

        index = 3, 67 > 56, exchange 67 56 {9, 56, 89, 67, 43, 12}

        index = 4, 56 > 43, exchange 56 43 {9, 43, 89, 67, 56, 12}

        index = 5, 43 > 12, exchange 43 12 {9, 12, 89, 67, 56, 43}

    index = 2, 89
        index = 3, 89 > 67, exchange 89 67 {9, 12, 67, 89, 56, 43}

        index = 4, 67 > 56, exchange 67 56 {9, 12, 56, 89, 67, 43}

        index = 5, 56 > 43, exchange 56 43 {9, 12, 43, 89, 67, 56}

    index = 3, 89
        index = 4, 89 > 67, exchange 89 67 {9, 12, 43, 67, 89, 56}

        index = 5, 67 > 56, exchange 67 56 {9, 12, 43, 56, 89, 67}

    index = 4, 89
        index = 5, 89 > 67, exchange 89 67 {9, 12, 43, 56, 67, 89}
*/
int main()
{
    int ary[] = {89, 56, 67, 12, 43, 9};
    for ( int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (ary[i] > ary[j])
            {
                int temp = ary[i]; // 保存ary[i]的值
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
    printf("排序后：\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ary[i]);
    }
    return 0;
}
