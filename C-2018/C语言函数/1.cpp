#include <stdio.h>

void jh(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    /**
    a = a + b;
    b = a - b;
    a = a - b;
    */
    printf("a = %d, b = %d\n", a, b);
}

int main()
{
    jh(10, 35);
    return 0;
}
