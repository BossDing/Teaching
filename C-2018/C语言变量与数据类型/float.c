#include "stdio.h"

void main()
{
	float width = 5.5;
	float height = 10.5;
	double px = 10.55555555;
	float x = 555555.5; // 整数加小数位 7位
	double y = 555555555555555.5; // 整数加小数位 16位
	printf("width = %.6f, height = %f\n", width, height);
	printf("px = %.f\n", px);
	printf("x = %f\n", x);
	printf("y = %f\n", y);
}