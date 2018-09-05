#include <stdio.h>

int main()
{
    int a = 20;
    switch (a)
    {
        case 1: printf("1\n");
        case 2: printf("2\n");
        case 10: printf("10\n");
        case 11: printf("11\n");
        default: printf("default\n");
    }
    return 0;
}
