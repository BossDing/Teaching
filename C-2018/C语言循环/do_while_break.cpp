#include <stdio.h>

int main()
{
    int num = 1;
    do
    {
        printf("%d\t", num);
        if (num == 50)
        {
            break;
        }
        num++;
    } while (num <= 100);
    return 0;
}
