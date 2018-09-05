#include "stdio.h"
void main()
{
    int a = 2;
    int b = 3;
    printf("a & b = %d\n", a & b); // 2
    printf("a | b = %d\n", a | b); // 3
    printf("a ^ b = %d\n", a ^ b); // 1
    printf("~a = %d\n", ~a); // -3
    printf("%d\n", a >> 1);
    printf("%d\n", a << 1);
    printf("%d\n", 5 >> 1);
    printf("%d\n", -2 << 1);
    printf("%d\n", ~-2);
    printf("%d\n", (-6) << 1);
}