#include "stdio.h"

void main()
{
	int a = 97;
	char b = '1';
	char c = 'a';
	char d = 'ab'; // 虽然没有报错，但是不能在char字符中放多个字符
	printf("%c\n", a);
	printf("%c\n", b); // 字符 1
	printf("%d\n", b); // 数字 49
	printf("%c\n", c);
	printf("\t%c\n", d);
	printf("\a");
}