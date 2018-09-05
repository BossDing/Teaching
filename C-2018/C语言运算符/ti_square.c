#include "stdio.h"

void main()
{
	int top;
	int bottom;
	int height;
	float square;
    printf("请输入上底，下底和高，用空格隔开\n");
    scanf("%d %d %d", &top, &bottom, &height);
    square = (top + bottom) * height / 2.0;
    printf("梯形的面积：%.2f\n", square);
}