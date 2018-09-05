#include <stdio.h>

int main()
{
    int sum = 1;
    for(int a = 10; a > 0; a--)
    {
        sum *= a;
    }
    printf("%d", sum);
    return 0;
}
