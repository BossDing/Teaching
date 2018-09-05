#include "stdio.h"

/**
	输入两个数，对这两个数进行交换，如a = 10, b = 20
										a = 20, b = 10
										
	方案2：直接进行加减运算
*/

void main()
{
    int num1;
    int num2;
    printf("请输入两个整数，用空格隔开\n");
    scanf("%d %d", &num1, &num2); 
    printf("num1 = %d, num2 = %d\n", num1, num2);
   	num1 = num1 + num2; // 10 + 20 = 30
   	num2 = num1 - num2; // 30 - 20 = 10;
   	num1 = num1 - num2; // 30 - 10 = 20;
    printf("num1 = %d, num2 = %d\n", num1, num2);
}