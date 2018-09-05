#include "stdio.h"

void main()
{
	int a = 0;
	int b = 100;
	int c = 200;
    printf("%d\n", !a); // 1 表示 真
    printf("%d\n", !b); // 0 表示 假
    
    printf("%d\n", a && b && c); // 0
    printf("%d\n", a || b || c); // 1
}