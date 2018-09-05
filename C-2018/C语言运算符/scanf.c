#include "stdio.h"

void main()
{
	int num1;
	int num2;
	float num3;
	printf("请输入num1和num2，只能是整数，两个数用逗号隔开，如100,200\n");
	scanf("%d,%d", &num1, &num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("请输入一个小数\n");
	scanf("%f", &num3);
	printf("%f\n", num3);
}