#include "stdio.h"

void main()
{
    int a = 5;
    int b = 25;
    int c = 50;
    int d = (c++ + --b) - (a-- * --c);
    // 50 + 24 = 74
    // 5 * 50 = 250
    // 74 - 250 = -176 tc3.0   vc6.0/gcc -171
    // a = 4, b = 24, c = 50
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
}