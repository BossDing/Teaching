#include "stdio.h"

#define PI 3.14

void main()
{
    float r;
    printf("请输入圆的半径\n");
    scanf("%f", &r);
    printf("圆的面积：%f", PI * r * r);
    
}