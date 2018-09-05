#include "stdio.h"

void main()
{
	short a = 100;
	short A = 200;
	int b;
	long c = -300;
	unsigned short int d = -100; // 必须用正数，如果是负数，则数据出错
	unsigned int e = -200;
	unsigned long f = -40000;
	
	b = 200;
	
	printf("A的值是：%d\n", a); // printf("%d", a); %d表示占位符，输出整型数, \n是转义符，表示换行
	printf("B=%d\n", b);
	printf("C=%d\n", c);
	printf("d = %d\n", d);
	printf("e = %d\n", e);
	printf("f = %d\n", f);
}