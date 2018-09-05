#include "stdio.h"

/**
	输入两个数，分别输出最大值和最小值
*/
void main()
{
    int num1;
    int num2;
    int max;
    int min;
    printf("请输入两个整数，用空格隔开\n");
    scanf("%d %d", &num1, &num2);
    max = num1 >= num2 ? num1 : num2;
    min = num1 <= num2 ? num1 : num2;
    printf("max = %d, min = %d\n", max, min);
}