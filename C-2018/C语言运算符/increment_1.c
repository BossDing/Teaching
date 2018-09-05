#include "stdio.h"

void main()
{
	int a = 10;
	int b = 20;
	int sum =  ++a * b-- + a++; // (++a) * (b--) + (a++)
	/**
	11 * 20 + 11 = 231
	a = 12
	b = 19
	*/
	printf("a = %d, b = %d, sum = %d", a, b, sum);
}