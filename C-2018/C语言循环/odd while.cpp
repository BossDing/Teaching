#include <stdio.h>

int main()
{
    int num = 1;
    int num1 = 1000;
    /**
    while (num <= 1000)
    {
        if (num % 2 == 1)
        {
            printf("%d\n", num);
        }
        num++;
    }
    */
    while (num <= 1000)
    {
        if (num++ % 2 == 1) {
            printf("%d\n", num - 1);
        }
    }

    while (num1 >= 1)
    {
        if (num1 % 2 == 1) {
            printf("%d\n", num1);
        }
        num1--;
    }
}
