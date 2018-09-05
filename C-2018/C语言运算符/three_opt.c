#include "stdio.h"
void main()
{
    int a = 5;
    int b;
    int c;
    b = a > 5 ? 1 : 0;
    c = b != 0 ? 10 : 20;
    printf("%d\n", b); // 0
    printf("%d\n", c); // 20
}