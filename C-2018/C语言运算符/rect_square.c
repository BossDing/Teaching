#include "stdio.h"

void main()
{
	int width;
	int height;
	printf("请输入长和宽，用空格隔开\n");
	scanf("%d %d", &width, &height);
	printf("矩形的面积：%d\n", width * height);
}