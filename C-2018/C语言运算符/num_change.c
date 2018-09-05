#include "stdio.h"

/**
	输入两个数，对这两个数进行交换，如a = 10, b = 20
										a = 20, b = 10
										
	方案1：借助第三个临时变量
*/

void main()
{
    int num1;
    int num2;
    int temp;
    printf("请输入两个整数，用空格隔开\n");
    scanf("%d %d", &num1, &num2); 
    printf("num1 = %d, num2 = %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1 = %d, num2 = %d\n", num1, num2);
}