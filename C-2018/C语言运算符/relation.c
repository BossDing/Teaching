#include "stdio.h"
void main()
{
	int a = 100;
	int b = 200;
	printf("%d\n", 5 < 10); // 1
	printf("%d\n", 20 > 30); // 0
	printf("%d\n", 5 == 6); // 0
	printf("%d\n", 5 == 5); // 1
	printf("%d\n", 5 >= 5); // 1
	printf("%d\n", 10 <= 20); // 1
	printf("%d\n", 5 != 6); // 1
	printf("%d\n", a <= b); // 1
}