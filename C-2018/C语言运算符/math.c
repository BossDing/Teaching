#include "stdio.h"

void main()
{
	int num1 = 100;
	int num2 = 200;
	int sum = num1 + num2; // 先求和，再赋值给某个变量
	int minus = num1 - num2;
	int plus = num1 * num2;
	int divide = num1 / num2; // 0
	int divide1 = num2 / num1; // 2
	float num3 = 100.0;
	float num4 = -200.5;
	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d + %d = %d\n", num1, num2, num1 + num2); // 直接使用求和的结果
	printf("%d - %d = %d\n", num1, num2, minus);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, plus);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, divide);
	printf("%d / %d = %d\n", num2, num1, divide1);
	printf("260 / 100 = %d\n", 260 / 100); // 2
	printf("%.1f / %d = %.2f\n", num3, num2, num3 / num2);
	printf("%d %% %d = %d\n", 605, 21, 605 % 21);
}