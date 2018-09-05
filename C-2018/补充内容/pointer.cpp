#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("address: %d\n", p);
    printf("content: %d\n", *p);
    return 0;
}
