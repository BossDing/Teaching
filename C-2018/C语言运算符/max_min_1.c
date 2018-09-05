#include "stdio.h"

/**
	输入三个数，分别输出最大值和最小值
*/
void main()
{
    int num1;
    int num2;
    int num3;
    int max;
    int min;
    printf("请输入三个整数，用空格隔开\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    /**
    max = num1 >= num2 ? num1 : num2;
    max = max >= num3 ? max : num3;
    
    min = num1 <= num2 ? num1 : num2;
    min = min <= num3 ? min : num3;
    */
    
    max = num1 >= num2 ? (num1 >= num3 ? num1 : num3) : (num2 >= num3 ? num2 : num3);
    min = num1 <= num2 ? (num1 <= num3 ? num1 : num3) : (num2 <= num3 ? num2 : num3);
    
    printf("max = %d, min = %d\n", max, min);
}