#include "stdio.h"

void main()
{
	int c = 200;
	printf("%d\n", ++c); // 201
	printf("%d\n", c++); // 201
	printf("%d\n", c); // 202
	printf("%d\n", c--); // 202
	printf("%d\n", --c); // 200
}