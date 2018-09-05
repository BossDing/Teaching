#include "stdio.h"
void main()
{
    int a = 5;
    int b = 1;
    a *= 5; // a = a * 5; 25
    a /= 5; // a = a / 5; 5
    a += 5; // a = a + 5; 10
    a -= 5; // a = a - 5; 5
    a /= 5; // a = a / 5; 1
    a %= 5; // a = a % 5; 1

    b += 2; // b = b + 2;
    b += 2; // b = b + 2;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
